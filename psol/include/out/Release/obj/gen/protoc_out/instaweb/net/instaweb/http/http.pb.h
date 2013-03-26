// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: net/instaweb/http/http.proto

#ifndef PROTOBUF_net_2finstaweb_2fhttp_2fhttp_2eproto__INCLUDED
#define PROTOBUF_net_2finstaweb_2fhttp_2fhttp_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace net_instaweb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
void protobuf_AssignDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
void protobuf_ShutdownFile_net_2finstaweb_2fhttp_2fhttp_2eproto();

class NameValue;
class HttpResponseHeaders;
class HttpRequestHeaders;

enum HttpRequestHeaders_Method {
  HttpRequestHeaders_Method_OPTIONS = 1,
  HttpRequestHeaders_Method_GET = 2,
  HttpRequestHeaders_Method_HEAD = 3,
  HttpRequestHeaders_Method_POST = 4,
  HttpRequestHeaders_Method_PUT = 5,
  HttpRequestHeaders_Method_DELETE = 6,
  HttpRequestHeaders_Method_TRACE = 7,
  HttpRequestHeaders_Method_CONNECT = 8,
  HttpRequestHeaders_Method_INVALID = 9,
  HttpRequestHeaders_Method_PATCH = 10
};
bool HttpRequestHeaders_Method_IsValid(int value);
const HttpRequestHeaders_Method HttpRequestHeaders_Method_Method_MIN = HttpRequestHeaders_Method_OPTIONS;
const HttpRequestHeaders_Method HttpRequestHeaders_Method_Method_MAX = HttpRequestHeaders_Method_PATCH;
const int HttpRequestHeaders_Method_Method_ARRAYSIZE = HttpRequestHeaders_Method_Method_MAX + 1;

// ===================================================================

class NameValue : public ::google::protobuf::MessageLite {
 public:
  NameValue();
  virtual ~NameValue();
  
  NameValue(const NameValue& from);
  
  inline NameValue& operator=(const NameValue& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const NameValue& default_instance();
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NameValue* internal_default_instance() {
    return default_instance_;
  }
  #endif
  
  void Swap(NameValue* other);
  
  // implements Message ----------------------------------------------
  
  NameValue* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NameValue& from);
  void MergeFrom(const NameValue& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  
  // @@protoc_insertion_point(class_scope:net_instaweb.NameValue)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_value();
  inline void clear_has_value();
  
  ::std::string* name_;
  ::std::string* value_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2fhttp_2fhttp_2eproto();
  
  void InitAsDefaultInstance();
  static NameValue* default_instance_;
};
// -------------------------------------------------------------------

class HttpResponseHeaders : public ::google::protobuf::MessageLite {
 public:
  HttpResponseHeaders();
  virtual ~HttpResponseHeaders();
  
  HttpResponseHeaders(const HttpResponseHeaders& from);
  
  inline HttpResponseHeaders& operator=(const HttpResponseHeaders& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const HttpResponseHeaders& default_instance();
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HttpResponseHeaders* internal_default_instance() {
    return default_instance_;
  }
  #endif
  
  void Swap(HttpResponseHeaders* other);
  
  // implements Message ----------------------------------------------
  
  HttpResponseHeaders* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const HttpResponseHeaders& from);
  void MergeFrom(const HttpResponseHeaders& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 status_code = 1;
  inline bool has_status_code() const;
  inline void clear_status_code();
  static const int kStatusCodeFieldNumber = 1;
  inline ::google::protobuf::int32 status_code() const;
  inline void set_status_code(::google::protobuf::int32 value);
  
  // optional string reason_phrase = 2;
  inline bool has_reason_phrase() const;
  inline void clear_reason_phrase();
  static const int kReasonPhraseFieldNumber = 2;
  inline const ::std::string& reason_phrase() const;
  inline void set_reason_phrase(const ::std::string& value);
  inline void set_reason_phrase(const char* value);
  inline void set_reason_phrase(const char* value, size_t size);
  inline ::std::string* mutable_reason_phrase();
  inline ::std::string* release_reason_phrase();
  
  // optional int32 minor_version = 3;
  inline bool has_minor_version() const;
  inline void clear_minor_version();
  static const int kMinorVersionFieldNumber = 3;
  inline ::google::protobuf::int32 minor_version() const;
  inline void set_minor_version(::google::protobuf::int32 value);
  
  // optional int32 major_version = 4 [default = 1];
  inline bool has_major_version() const;
  inline void clear_major_version();
  static const int kMajorVersionFieldNumber = 4;
  inline ::google::protobuf::int32 major_version() const;
  inline void set_major_version(::google::protobuf::int32 value);
  
  // optional int64 expiration_time_ms = 5;
  inline bool has_expiration_time_ms() const;
  inline void clear_expiration_time_ms();
  static const int kExpirationTimeMsFieldNumber = 5;
  inline ::google::protobuf::int64 expiration_time_ms() const;
  inline void set_expiration_time_ms(::google::protobuf::int64 value);
  
  // optional int64 date_ms = 6;
  inline bool has_date_ms() const;
  inline void clear_date_ms();
  static const int kDateMsFieldNumber = 6;
  inline ::google::protobuf::int64 date_ms() const;
  inline void set_date_ms(::google::protobuf::int64 value);
  
  // optional int64 last_modified_time_ms = 10;
  inline bool has_last_modified_time_ms() const;
  inline void clear_last_modified_time_ms();
  static const int kLastModifiedTimeMsFieldNumber = 10;
  inline ::google::protobuf::int64 last_modified_time_ms() const;
  inline void set_last_modified_time_ms(::google::protobuf::int64 value);
  
  // optional int64 cache_ttl_ms = 11;
  inline bool has_cache_ttl_ms() const;
  inline void clear_cache_ttl_ms();
  static const int kCacheTtlMsFieldNumber = 11;
  inline ::google::protobuf::int64 cache_ttl_ms() const;
  inline void set_cache_ttl_ms(::google::protobuf::int64 value);
  
  // optional bool cacheable = 7;
  inline bool has_cacheable() const;
  inline void clear_cacheable();
  static const int kCacheableFieldNumber = 7;
  inline bool cacheable() const;
  inline void set_cacheable(bool value);
  
  // optional bool proxy_cacheable = 8;
  inline bool has_proxy_cacheable() const;
  inline void clear_proxy_cacheable();
  static const int kProxyCacheableFieldNumber = 8;
  inline bool proxy_cacheable() const;
  inline void set_proxy_cacheable(bool value);
  
  // repeated .net_instaweb.NameValue header = 9;
  inline int header_size() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 9;
  inline const ::net_instaweb::NameValue& header(int index) const;
  inline ::net_instaweb::NameValue* mutable_header(int index);
  inline ::net_instaweb::NameValue* add_header();
  inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >&
      header() const;
  inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >*
      mutable_header();
  
  // optional bool is_implicitly_cacheable = 12;
  inline bool has_is_implicitly_cacheable() const;
  inline void clear_is_implicitly_cacheable();
  static const int kIsImplicitlyCacheableFieldNumber = 12;
  inline bool is_implicitly_cacheable() const;
  inline void set_is_implicitly_cacheable(bool value);
  
  // @@protoc_insertion_point(class_scope:net_instaweb.HttpResponseHeaders)
 private:
  inline void set_has_status_code();
  inline void clear_has_status_code();
  inline void set_has_reason_phrase();
  inline void clear_has_reason_phrase();
  inline void set_has_minor_version();
  inline void clear_has_minor_version();
  inline void set_has_major_version();
  inline void clear_has_major_version();
  inline void set_has_expiration_time_ms();
  inline void clear_has_expiration_time_ms();
  inline void set_has_date_ms();
  inline void clear_has_date_ms();
  inline void set_has_last_modified_time_ms();
  inline void clear_has_last_modified_time_ms();
  inline void set_has_cache_ttl_ms();
  inline void clear_has_cache_ttl_ms();
  inline void set_has_cacheable();
  inline void clear_has_cacheable();
  inline void set_has_proxy_cacheable();
  inline void clear_has_proxy_cacheable();
  inline void set_has_is_implicitly_cacheable();
  inline void clear_has_is_implicitly_cacheable();
  
  ::std::string* reason_phrase_;
  ::google::protobuf::int32 status_code_;
  ::google::protobuf::int32 minor_version_;
  ::google::protobuf::int64 expiration_time_ms_;
  ::google::protobuf::int64 date_ms_;
  ::google::protobuf::int64 last_modified_time_ms_;
  ::google::protobuf::int64 cache_ttl_ms_;
  ::google::protobuf::int32 major_version_;
  bool cacheable_;
  bool proxy_cacheable_;
  bool is_implicitly_cacheable_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue > header_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2fhttp_2fhttp_2eproto();
  
  void InitAsDefaultInstance();
  static HttpResponseHeaders* default_instance_;
};
// -------------------------------------------------------------------

class HttpRequestHeaders : public ::google::protobuf::MessageLite {
 public:
  HttpRequestHeaders();
  virtual ~HttpRequestHeaders();
  
  HttpRequestHeaders(const HttpRequestHeaders& from);
  
  inline HttpRequestHeaders& operator=(const HttpRequestHeaders& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const HttpRequestHeaders& default_instance();
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const HttpRequestHeaders* internal_default_instance() {
    return default_instance_;
  }
  #endif
  
  void Swap(HttpRequestHeaders* other);
  
  // implements Message ----------------------------------------------
  
  HttpRequestHeaders* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const HttpRequestHeaders& from);
  void MergeFrom(const HttpRequestHeaders& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef HttpRequestHeaders_Method Method;
  static const Method OPTIONS = HttpRequestHeaders_Method_OPTIONS;
  static const Method GET = HttpRequestHeaders_Method_GET;
  static const Method HEAD = HttpRequestHeaders_Method_HEAD;
  static const Method POST = HttpRequestHeaders_Method_POST;
  static const Method PUT = HttpRequestHeaders_Method_PUT;
  static const Method DELETE = HttpRequestHeaders_Method_DELETE;
  static const Method TRACE = HttpRequestHeaders_Method_TRACE;
  static const Method CONNECT = HttpRequestHeaders_Method_CONNECT;
  static const Method INVALID = HttpRequestHeaders_Method_INVALID;
  static const Method PATCH = HttpRequestHeaders_Method_PATCH;
  static inline bool Method_IsValid(int value) {
    return HttpRequestHeaders_Method_IsValid(value);
  }
  static const Method Method_MIN =
    HttpRequestHeaders_Method_Method_MIN;
  static const Method Method_MAX =
    HttpRequestHeaders_Method_Method_MAX;
  static const int Method_ARRAYSIZE =
    HttpRequestHeaders_Method_Method_ARRAYSIZE;
  
  // accessors -------------------------------------------------------
  
  // optional int32 minor_version = 1;
  inline bool has_minor_version() const;
  inline void clear_minor_version();
  static const int kMinorVersionFieldNumber = 1;
  inline ::google::protobuf::int32 minor_version() const;
  inline void set_minor_version(::google::protobuf::int32 value);
  
  // optional int32 major_version = 2 [default = 1];
  inline bool has_major_version() const;
  inline void clear_major_version();
  static const int kMajorVersionFieldNumber = 2;
  inline ::google::protobuf::int32 major_version() const;
  inline void set_major_version(::google::protobuf::int32 value);
  
  // optional .net_instaweb.HttpRequestHeaders.Method method = 3 [default = GET];
  inline bool has_method() const;
  inline void clear_method();
  static const int kMethodFieldNumber = 3;
  inline ::net_instaweb::HttpRequestHeaders_Method method() const;
  inline void set_method(::net_instaweb::HttpRequestHeaders_Method value);
  
  // repeated .net_instaweb.NameValue header = 4;
  inline int header_size() const;
  inline void clear_header();
  static const int kHeaderFieldNumber = 4;
  inline const ::net_instaweb::NameValue& header(int index) const;
  inline ::net_instaweb::NameValue* mutable_header(int index);
  inline ::net_instaweb::NameValue* add_header();
  inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >&
      header() const;
  inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >*
      mutable_header();
  
  // optional bytes message_body = 5;
  inline bool has_message_body() const;
  inline void clear_message_body();
  static const int kMessageBodyFieldNumber = 5;
  inline const ::std::string& message_body() const;
  inline void set_message_body(const ::std::string& value);
  inline void set_message_body(const char* value);
  inline void set_message_body(const void* value, size_t size);
  inline ::std::string* mutable_message_body();
  inline ::std::string* release_message_body();
  
  // @@protoc_insertion_point(class_scope:net_instaweb.HttpRequestHeaders)
 private:
  inline void set_has_minor_version();
  inline void clear_has_minor_version();
  inline void set_has_major_version();
  inline void clear_has_major_version();
  inline void set_has_method();
  inline void clear_has_method();
  inline void set_has_message_body();
  inline void clear_has_message_body();
  
  ::google::protobuf::int32 minor_version_;
  ::google::protobuf::int32 major_version_;
  ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue > header_;
  ::std::string* message_body_;
  int method_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  #endif
  friend void protobuf_AssignDesc_net_2finstaweb_2fhttp_2fhttp_2eproto();
  friend void protobuf_ShutdownFile_net_2finstaweb_2fhttp_2fhttp_2eproto();
  
  void InitAsDefaultInstance();
  static HttpRequestHeaders* default_instance_;
};
// ===================================================================


// ===================================================================

// NameValue

// required string name = 1;
inline bool NameValue::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NameValue::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NameValue::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NameValue::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& NameValue::name() const {
  return *name_;
}
inline void NameValue::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NameValue::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NameValue::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NameValue::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* NameValue::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string value = 2;
inline bool NameValue::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NameValue::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NameValue::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NameValue::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& NameValue::value() const {
  return *value_;
}
inline void NameValue::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void NameValue::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void NameValue::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NameValue::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* NameValue::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// HttpResponseHeaders

// optional int32 status_code = 1;
inline bool HttpResponseHeaders::has_status_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpResponseHeaders::set_has_status_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpResponseHeaders::clear_has_status_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpResponseHeaders::clear_status_code() {
  status_code_ = 0;
  clear_has_status_code();
}
inline ::google::protobuf::int32 HttpResponseHeaders::status_code() const {
  return status_code_;
}
inline void HttpResponseHeaders::set_status_code(::google::protobuf::int32 value) {
  set_has_status_code();
  status_code_ = value;
}

// optional string reason_phrase = 2;
inline bool HttpResponseHeaders::has_reason_phrase() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpResponseHeaders::set_has_reason_phrase() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpResponseHeaders::clear_has_reason_phrase() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpResponseHeaders::clear_reason_phrase() {
  if (reason_phrase_ != &::google::protobuf::internal::kEmptyString) {
    reason_phrase_->clear();
  }
  clear_has_reason_phrase();
}
inline const ::std::string& HttpResponseHeaders::reason_phrase() const {
  return *reason_phrase_;
}
inline void HttpResponseHeaders::set_reason_phrase(const ::std::string& value) {
  set_has_reason_phrase();
  if (reason_phrase_ == &::google::protobuf::internal::kEmptyString) {
    reason_phrase_ = new ::std::string;
  }
  reason_phrase_->assign(value);
}
inline void HttpResponseHeaders::set_reason_phrase(const char* value) {
  set_has_reason_phrase();
  if (reason_phrase_ == &::google::protobuf::internal::kEmptyString) {
    reason_phrase_ = new ::std::string;
  }
  reason_phrase_->assign(value);
}
inline void HttpResponseHeaders::set_reason_phrase(const char* value, size_t size) {
  set_has_reason_phrase();
  if (reason_phrase_ == &::google::protobuf::internal::kEmptyString) {
    reason_phrase_ = new ::std::string;
  }
  reason_phrase_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HttpResponseHeaders::mutable_reason_phrase() {
  set_has_reason_phrase();
  if (reason_phrase_ == &::google::protobuf::internal::kEmptyString) {
    reason_phrase_ = new ::std::string;
  }
  return reason_phrase_;
}
inline ::std::string* HttpResponseHeaders::release_reason_phrase() {
  clear_has_reason_phrase();
  if (reason_phrase_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = reason_phrase_;
    reason_phrase_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 minor_version = 3;
inline bool HttpResponseHeaders::has_minor_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HttpResponseHeaders::set_has_minor_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HttpResponseHeaders::clear_has_minor_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HttpResponseHeaders::clear_minor_version() {
  minor_version_ = 0;
  clear_has_minor_version();
}
inline ::google::protobuf::int32 HttpResponseHeaders::minor_version() const {
  return minor_version_;
}
inline void HttpResponseHeaders::set_minor_version(::google::protobuf::int32 value) {
  set_has_minor_version();
  minor_version_ = value;
}

// optional int32 major_version = 4 [default = 1];
inline bool HttpResponseHeaders::has_major_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HttpResponseHeaders::set_has_major_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HttpResponseHeaders::clear_has_major_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HttpResponseHeaders::clear_major_version() {
  major_version_ = 1;
  clear_has_major_version();
}
inline ::google::protobuf::int32 HttpResponseHeaders::major_version() const {
  return major_version_;
}
inline void HttpResponseHeaders::set_major_version(::google::protobuf::int32 value) {
  set_has_major_version();
  major_version_ = value;
}

// optional int64 expiration_time_ms = 5;
inline bool HttpResponseHeaders::has_expiration_time_ms() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void HttpResponseHeaders::set_has_expiration_time_ms() {
  _has_bits_[0] |= 0x00000010u;
}
inline void HttpResponseHeaders::clear_has_expiration_time_ms() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void HttpResponseHeaders::clear_expiration_time_ms() {
  expiration_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_expiration_time_ms();
}
inline ::google::protobuf::int64 HttpResponseHeaders::expiration_time_ms() const {
  return expiration_time_ms_;
}
inline void HttpResponseHeaders::set_expiration_time_ms(::google::protobuf::int64 value) {
  set_has_expiration_time_ms();
  expiration_time_ms_ = value;
}

// optional int64 date_ms = 6;
inline bool HttpResponseHeaders::has_date_ms() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void HttpResponseHeaders::set_has_date_ms() {
  _has_bits_[0] |= 0x00000020u;
}
inline void HttpResponseHeaders::clear_has_date_ms() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void HttpResponseHeaders::clear_date_ms() {
  date_ms_ = GOOGLE_LONGLONG(0);
  clear_has_date_ms();
}
inline ::google::protobuf::int64 HttpResponseHeaders::date_ms() const {
  return date_ms_;
}
inline void HttpResponseHeaders::set_date_ms(::google::protobuf::int64 value) {
  set_has_date_ms();
  date_ms_ = value;
}

// optional int64 last_modified_time_ms = 10;
inline bool HttpResponseHeaders::has_last_modified_time_ms() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void HttpResponseHeaders::set_has_last_modified_time_ms() {
  _has_bits_[0] |= 0x00000040u;
}
inline void HttpResponseHeaders::clear_has_last_modified_time_ms() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void HttpResponseHeaders::clear_last_modified_time_ms() {
  last_modified_time_ms_ = GOOGLE_LONGLONG(0);
  clear_has_last_modified_time_ms();
}
inline ::google::protobuf::int64 HttpResponseHeaders::last_modified_time_ms() const {
  return last_modified_time_ms_;
}
inline void HttpResponseHeaders::set_last_modified_time_ms(::google::protobuf::int64 value) {
  set_has_last_modified_time_ms();
  last_modified_time_ms_ = value;
}

// optional int64 cache_ttl_ms = 11;
inline bool HttpResponseHeaders::has_cache_ttl_ms() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void HttpResponseHeaders::set_has_cache_ttl_ms() {
  _has_bits_[0] |= 0x00000080u;
}
inline void HttpResponseHeaders::clear_has_cache_ttl_ms() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void HttpResponseHeaders::clear_cache_ttl_ms() {
  cache_ttl_ms_ = GOOGLE_LONGLONG(0);
  clear_has_cache_ttl_ms();
}
inline ::google::protobuf::int64 HttpResponseHeaders::cache_ttl_ms() const {
  return cache_ttl_ms_;
}
inline void HttpResponseHeaders::set_cache_ttl_ms(::google::protobuf::int64 value) {
  set_has_cache_ttl_ms();
  cache_ttl_ms_ = value;
}

// optional bool cacheable = 7;
inline bool HttpResponseHeaders::has_cacheable() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void HttpResponseHeaders::set_has_cacheable() {
  _has_bits_[0] |= 0x00000100u;
}
inline void HttpResponseHeaders::clear_has_cacheable() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void HttpResponseHeaders::clear_cacheable() {
  cacheable_ = false;
  clear_has_cacheable();
}
inline bool HttpResponseHeaders::cacheable() const {
  return cacheable_;
}
inline void HttpResponseHeaders::set_cacheable(bool value) {
  set_has_cacheable();
  cacheable_ = value;
}

// optional bool proxy_cacheable = 8;
inline bool HttpResponseHeaders::has_proxy_cacheable() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void HttpResponseHeaders::set_has_proxy_cacheable() {
  _has_bits_[0] |= 0x00000200u;
}
inline void HttpResponseHeaders::clear_has_proxy_cacheable() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void HttpResponseHeaders::clear_proxy_cacheable() {
  proxy_cacheable_ = false;
  clear_has_proxy_cacheable();
}
inline bool HttpResponseHeaders::proxy_cacheable() const {
  return proxy_cacheable_;
}
inline void HttpResponseHeaders::set_proxy_cacheable(bool value) {
  set_has_proxy_cacheable();
  proxy_cacheable_ = value;
}

// repeated .net_instaweb.NameValue header = 9;
inline int HttpResponseHeaders::header_size() const {
  return header_.size();
}
inline void HttpResponseHeaders::clear_header() {
  header_.Clear();
}
inline const ::net_instaweb::NameValue& HttpResponseHeaders::header(int index) const {
  return header_.Get(index);
}
inline ::net_instaweb::NameValue* HttpResponseHeaders::mutable_header(int index) {
  return header_.Mutable(index);
}
inline ::net_instaweb::NameValue* HttpResponseHeaders::add_header() {
  return header_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >&
HttpResponseHeaders::header() const {
  return header_;
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >*
HttpResponseHeaders::mutable_header() {
  return &header_;
}

// optional bool is_implicitly_cacheable = 12;
inline bool HttpResponseHeaders::has_is_implicitly_cacheable() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void HttpResponseHeaders::set_has_is_implicitly_cacheable() {
  _has_bits_[0] |= 0x00000800u;
}
inline void HttpResponseHeaders::clear_has_is_implicitly_cacheable() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void HttpResponseHeaders::clear_is_implicitly_cacheable() {
  is_implicitly_cacheable_ = false;
  clear_has_is_implicitly_cacheable();
}
inline bool HttpResponseHeaders::is_implicitly_cacheable() const {
  return is_implicitly_cacheable_;
}
inline void HttpResponseHeaders::set_is_implicitly_cacheable(bool value) {
  set_has_is_implicitly_cacheable();
  is_implicitly_cacheable_ = value;
}

// -------------------------------------------------------------------

// HttpRequestHeaders

// optional int32 minor_version = 1;
inline bool HttpRequestHeaders::has_minor_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HttpRequestHeaders::set_has_minor_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HttpRequestHeaders::clear_has_minor_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HttpRequestHeaders::clear_minor_version() {
  minor_version_ = 0;
  clear_has_minor_version();
}
inline ::google::protobuf::int32 HttpRequestHeaders::minor_version() const {
  return minor_version_;
}
inline void HttpRequestHeaders::set_minor_version(::google::protobuf::int32 value) {
  set_has_minor_version();
  minor_version_ = value;
}

// optional int32 major_version = 2 [default = 1];
inline bool HttpRequestHeaders::has_major_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HttpRequestHeaders::set_has_major_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HttpRequestHeaders::clear_has_major_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HttpRequestHeaders::clear_major_version() {
  major_version_ = 1;
  clear_has_major_version();
}
inline ::google::protobuf::int32 HttpRequestHeaders::major_version() const {
  return major_version_;
}
inline void HttpRequestHeaders::set_major_version(::google::protobuf::int32 value) {
  set_has_major_version();
  major_version_ = value;
}

// optional .net_instaweb.HttpRequestHeaders.Method method = 3 [default = GET];
inline bool HttpRequestHeaders::has_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HttpRequestHeaders::set_has_method() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HttpRequestHeaders::clear_has_method() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HttpRequestHeaders::clear_method() {
  method_ = 2;
  clear_has_method();
}
inline ::net_instaweb::HttpRequestHeaders_Method HttpRequestHeaders::method() const {
  return static_cast< ::net_instaweb::HttpRequestHeaders_Method >(method_);
}
inline void HttpRequestHeaders::set_method(::net_instaweb::HttpRequestHeaders_Method value) {
  GOOGLE_DCHECK(::net_instaweb::HttpRequestHeaders_Method_IsValid(value));
  set_has_method();
  method_ = value;
}

// repeated .net_instaweb.NameValue header = 4;
inline int HttpRequestHeaders::header_size() const {
  return header_.size();
}
inline void HttpRequestHeaders::clear_header() {
  header_.Clear();
}
inline const ::net_instaweb::NameValue& HttpRequestHeaders::header(int index) const {
  return header_.Get(index);
}
inline ::net_instaweb::NameValue* HttpRequestHeaders::mutable_header(int index) {
  return header_.Mutable(index);
}
inline ::net_instaweb::NameValue* HttpRequestHeaders::add_header() {
  return header_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >&
HttpRequestHeaders::header() const {
  return header_;
}
inline ::google::protobuf::RepeatedPtrField< ::net_instaweb::NameValue >*
HttpRequestHeaders::mutable_header() {
  return &header_;
}

// optional bytes message_body = 5;
inline bool HttpRequestHeaders::has_message_body() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void HttpRequestHeaders::set_has_message_body() {
  _has_bits_[0] |= 0x00000010u;
}
inline void HttpRequestHeaders::clear_has_message_body() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void HttpRequestHeaders::clear_message_body() {
  if (message_body_ != &::google::protobuf::internal::kEmptyString) {
    message_body_->clear();
  }
  clear_has_message_body();
}
inline const ::std::string& HttpRequestHeaders::message_body() const {
  return *message_body_;
}
inline void HttpRequestHeaders::set_message_body(const ::std::string& value) {
  set_has_message_body();
  if (message_body_ == &::google::protobuf::internal::kEmptyString) {
    message_body_ = new ::std::string;
  }
  message_body_->assign(value);
}
inline void HttpRequestHeaders::set_message_body(const char* value) {
  set_has_message_body();
  if (message_body_ == &::google::protobuf::internal::kEmptyString) {
    message_body_ = new ::std::string;
  }
  message_body_->assign(value);
}
inline void HttpRequestHeaders::set_message_body(const void* value, size_t size) {
  set_has_message_body();
  if (message_body_ == &::google::protobuf::internal::kEmptyString) {
    message_body_ = new ::std::string;
  }
  message_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* HttpRequestHeaders::mutable_message_body() {
  set_has_message_body();
  if (message_body_ == &::google::protobuf::internal::kEmptyString) {
    message_body_ = new ::std::string;
  }
  return message_body_;
}
inline ::std::string* HttpRequestHeaders::release_message_body() {
  clear_has_message_body();
  if (message_body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_body_;
    message_body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace net_instaweb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_net_2finstaweb_2fhttp_2fhttp_2eproto__INCLUDED
