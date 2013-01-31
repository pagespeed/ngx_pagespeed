// Copyright 2013 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Author: oschaaf@gmail.com (Otto van der Schaaf)

#ifndef NGX_MESSAGE_HANDLER_H_
#define NGX_MESSAGE_HANDLER_H_

extern "C" {
  #include <ngx_core.h>
  #include <ngx_log.h>
}

#include <cstdarg>

#include "net/instaweb/util/public/basictypes.h"
#include "net/instaweb/util/public/google_message_handler.h"
#include "net/instaweb/util/public/message_handler.h"
#include "net/instaweb/util/public/scoped_ptr.h"
#include "net/instaweb/util/public/string.h"
#include "net/instaweb/util/public/string_util.h"

namespace net_instaweb {

  class AbstractMutex;
  class SharedCircularBuffer;
  class Timer;
  class Writer;

  // Implementation of a message handler that uses ngx_log_error()
  // logging to emit messsages, with a fallback to GoogleMessageHandler
  class NgxMessageHandler : public GoogleMessageHandler {
 public:
    // version is a string added to each message.
    // Timer is used to generate timestamp for messages in shared memory.
    NgxMessageHandler(Timer* timer, AbstractMutex* mutex);

    // Installs a signal hndler for common crash signals that tries to print
    // out a backtrace.
    static void InstallCrashHandler(ngx_log_t* log);

    // When we initialize NgxMessageHandler in NgxRewriteDriverFactory,
    // SharedCircularBuffer of NgxRewriteDriverFactory is not initialized yet.
    // We need to set buffer_ later in RootInit() or ChildInit().
    void set_buffer(SharedCircularBuffer* buff);
    void set_log(ngx_log_t* log) { log_ = log; };
    void SetPidString(const int64 pid) {
      pid_string_ = StrCat("[", Integer64ToString(pid), "]");
    }
    // Dump contents of SharedCircularBuffer.
    bool Dump(Writer* writer);

 protected:
    virtual void MessageVImpl(MessageType type, const char* msg, va_list args);

    virtual void FileMessageVImpl(MessageType type, const char* filename,
                                  int line, const char* msg, va_list args);

 private:
    ngx_uint_t GetNgxLogLevel(MessageType type);
    GoogleString Format(const char* msg, va_list args);

    //const server_rec* server_rec_;
    const GoogleString version_;
    // This timer is used to prepend time when writing a message
    // to SharedCircularBuffer.
    Timer* timer_;
    scoped_ptr<AbstractMutex> mutex_;
    // String "[pid]".
    GoogleString pid_string_;
    // This handler is for internal use.
    // Some functions of SharedCircularBuffer need MessageHandler as argument,
    // We do not want to pass in another NgxMessageHandler to cause infinite
    // loop.
    GoogleMessageHandler handler_;
    SharedCircularBuffer* buffer_;
    ngx_log_t* log_;
    
    DISALLOW_COPY_AND_ASSIGN(NgxMessageHandler);
  };

}  // namespace net_instaweb

#endif  // NGX_MESSAGE_HANDLER_H_
