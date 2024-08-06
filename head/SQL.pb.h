// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SQL.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SQL_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SQL_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SQL_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SQL_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SQL_2eproto;
namespace SQL {
class SelectRequest;
struct SelectRequestDefaultTypeInternal;
extern SelectRequestDefaultTypeInternal _SelectRequest_default_instance_;
class SelectResponse;
struct SelectResponseDefaultTypeInternal;
extern SelectResponseDefaultTypeInternal _SelectResponse_default_instance_;
}  // namespace SQL
PROTOBUF_NAMESPACE_OPEN
template<> ::SQL::SelectRequest* Arena::CreateMaybeMessage<::SQL::SelectRequest>(Arena*);
template<> ::SQL::SelectResponse* Arena::CreateMaybeMessage<::SQL::SelectResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace SQL {

// ===================================================================

class SelectRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SQL.SelectRequest) */ {
 public:
  inline SelectRequest() : SelectRequest(nullptr) {}
  ~SelectRequest() override;
  explicit PROTOBUF_CONSTEXPR SelectRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SelectRequest(const SelectRequest& from);
  SelectRequest(SelectRequest&& from) noexcept
    : SelectRequest() {
    *this = ::std::move(from);
  }

  inline SelectRequest& operator=(const SelectRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SelectRequest& operator=(SelectRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SelectRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SelectRequest* internal_default_instance() {
    return reinterpret_cast<const SelectRequest*>(
               &_SelectRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SelectRequest& a, SelectRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SelectRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SelectRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SelectRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SelectRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SelectRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SelectRequest& from) {
    SelectRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SelectRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SQL.SelectRequest";
  }
  protected:
  explicit SelectRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTableNameFieldNumber = 2,
    kFieldNameFieldNumber = 3,
    kSqlFieldNumber = 1,
  };
  // repeated string tableName = 2;
  int tablename_size() const;
  private:
  int _internal_tablename_size() const;
  public:
  void clear_tablename();
  const std::string& tablename(int index) const;
  std::string* mutable_tablename(int index);
  void set_tablename(int index, const std::string& value);
  void set_tablename(int index, std::string&& value);
  void set_tablename(int index, const char* value);
  void set_tablename(int index, const char* value, size_t size);
  std::string* add_tablename();
  void add_tablename(const std::string& value);
  void add_tablename(std::string&& value);
  void add_tablename(const char* value);
  void add_tablename(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& tablename() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_tablename();
  private:
  const std::string& _internal_tablename(int index) const;
  std::string* _internal_add_tablename();
  public:

  // repeated string fieldName = 3;
  int fieldname_size() const;
  private:
  int _internal_fieldname_size() const;
  public:
  void clear_fieldname();
  const std::string& fieldname(int index) const;
  std::string* mutable_fieldname(int index);
  void set_fieldname(int index, const std::string& value);
  void set_fieldname(int index, std::string&& value);
  void set_fieldname(int index, const char* value);
  void set_fieldname(int index, const char* value, size_t size);
  std::string* add_fieldname();
  void add_fieldname(const std::string& value);
  void add_fieldname(std::string&& value);
  void add_fieldname(const char* value);
  void add_fieldname(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& fieldname() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_fieldname();
  private:
  const std::string& _internal_fieldname(int index) const;
  std::string* _internal_add_fieldname();
  public:

  // string sql = 1;
  void clear_sql();
  const std::string& sql() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sql(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sql();
  PROTOBUF_NODISCARD std::string* release_sql();
  void set_allocated_sql(std::string* sql);
  private:
  const std::string& _internal_sql() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sql(const std::string& value);
  std::string* _internal_mutable_sql();
  public:

  // @@protoc_insertion_point(class_scope:SQL.SelectRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> tablename_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> fieldname_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sql_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SQL_2eproto;
};
// -------------------------------------------------------------------

class SelectResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:SQL.SelectResponse) */ {
 public:
  inline SelectResponse() : SelectResponse(nullptr) {}
  ~SelectResponse() override;
  explicit PROTOBUF_CONSTEXPR SelectResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SelectResponse(const SelectResponse& from);
  SelectResponse(SelectResponse&& from) noexcept
    : SelectResponse() {
    *this = ::std::move(from);
  }

  inline SelectResponse& operator=(const SelectResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SelectResponse& operator=(SelectResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const SelectResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SelectResponse* internal_default_instance() {
    return reinterpret_cast<const SelectResponse*>(
               &_SelectResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SelectResponse& a, SelectResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SelectResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SelectResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SelectResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SelectResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SelectResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SelectResponse& from) {
    SelectResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SelectResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SQL.SelectResponse";
  }
  protected:
  explicit SelectResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
    kErrInfoFieldNumber = 2,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_result(ArgT0&& arg0, ArgT... args);
  std::string* mutable_result();
  PROTOBUF_NODISCARD std::string* release_result();
  void set_allocated_result(std::string* result);
  private:
  const std::string& _internal_result() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // string errInfo = 2;
  void clear_errinfo();
  const std::string& errinfo() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_errinfo(ArgT0&& arg0, ArgT... args);
  std::string* mutable_errinfo();
  PROTOBUF_NODISCARD std::string* release_errinfo();
  void set_allocated_errinfo(std::string* errinfo);
  private:
  const std::string& _internal_errinfo() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_errinfo(const std::string& value);
  std::string* _internal_mutable_errinfo();
  public:

  // @@protoc_insertion_point(class_scope:SQL.SelectResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errinfo_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SQL_2eproto;
};
// ===================================================================

class SQLHandle_Stub;

class SQLHandle : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline SQLHandle() {};
 public:
  virtual ~SQLHandle();

  typedef SQLHandle_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void SelectHandle(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::SQL::SelectRequest* request,
                       ::SQL::SelectResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SQLHandle);
};

class SQLHandle_Stub : public SQLHandle {
 public:
  SQLHandle_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  SQLHandle_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~SQLHandle_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements SQLHandle ------------------------------------------

  void SelectHandle(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::SQL::SelectRequest* request,
                       ::SQL::SelectResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(SQLHandle_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SelectRequest

// string sql = 1;
inline void SelectRequest::clear_sql() {
  _impl_.sql_.ClearToEmpty();
}
inline const std::string& SelectRequest::sql() const {
  // @@protoc_insertion_point(field_get:SQL.SelectRequest.sql)
  return _internal_sql();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SelectRequest::set_sql(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sql_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SQL.SelectRequest.sql)
}
inline std::string* SelectRequest::mutable_sql() {
  std::string* _s = _internal_mutable_sql();
  // @@protoc_insertion_point(field_mutable:SQL.SelectRequest.sql)
  return _s;
}
inline const std::string& SelectRequest::_internal_sql() const {
  return _impl_.sql_.Get();
}
inline void SelectRequest::_internal_set_sql(const std::string& value) {
  
  _impl_.sql_.Set(value, GetArenaForAllocation());
}
inline std::string* SelectRequest::_internal_mutable_sql() {
  
  return _impl_.sql_.Mutable(GetArenaForAllocation());
}
inline std::string* SelectRequest::release_sql() {
  // @@protoc_insertion_point(field_release:SQL.SelectRequest.sql)
  return _impl_.sql_.Release();
}
inline void SelectRequest::set_allocated_sql(std::string* sql) {
  if (sql != nullptr) {
    
  } else {
    
  }
  _impl_.sql_.SetAllocated(sql, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sql_.IsDefault()) {
    _impl_.sql_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SQL.SelectRequest.sql)
}

// repeated string tableName = 2;
inline int SelectRequest::_internal_tablename_size() const {
  return _impl_.tablename_.size();
}
inline int SelectRequest::tablename_size() const {
  return _internal_tablename_size();
}
inline void SelectRequest::clear_tablename() {
  _impl_.tablename_.Clear();
}
inline std::string* SelectRequest::add_tablename() {
  std::string* _s = _internal_add_tablename();
  // @@protoc_insertion_point(field_add_mutable:SQL.SelectRequest.tableName)
  return _s;
}
inline const std::string& SelectRequest::_internal_tablename(int index) const {
  return _impl_.tablename_.Get(index);
}
inline const std::string& SelectRequest::tablename(int index) const {
  // @@protoc_insertion_point(field_get:SQL.SelectRequest.tableName)
  return _internal_tablename(index);
}
inline std::string* SelectRequest::mutable_tablename(int index) {
  // @@protoc_insertion_point(field_mutable:SQL.SelectRequest.tableName)
  return _impl_.tablename_.Mutable(index);
}
inline void SelectRequest::set_tablename(int index, const std::string& value) {
  _impl_.tablename_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:SQL.SelectRequest.tableName)
}
inline void SelectRequest::set_tablename(int index, std::string&& value) {
  _impl_.tablename_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:SQL.SelectRequest.tableName)
}
inline void SelectRequest::set_tablename(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.tablename_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:SQL.SelectRequest.tableName)
}
inline void SelectRequest::set_tablename(int index, const char* value, size_t size) {
  _impl_.tablename_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:SQL.SelectRequest.tableName)
}
inline std::string* SelectRequest::_internal_add_tablename() {
  return _impl_.tablename_.Add();
}
inline void SelectRequest::add_tablename(const std::string& value) {
  _impl_.tablename_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:SQL.SelectRequest.tableName)
}
inline void SelectRequest::add_tablename(std::string&& value) {
  _impl_.tablename_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:SQL.SelectRequest.tableName)
}
inline void SelectRequest::add_tablename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.tablename_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:SQL.SelectRequest.tableName)
}
inline void SelectRequest::add_tablename(const char* value, size_t size) {
  _impl_.tablename_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:SQL.SelectRequest.tableName)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SelectRequest::tablename() const {
  // @@protoc_insertion_point(field_list:SQL.SelectRequest.tableName)
  return _impl_.tablename_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SelectRequest::mutable_tablename() {
  // @@protoc_insertion_point(field_mutable_list:SQL.SelectRequest.tableName)
  return &_impl_.tablename_;
}

// repeated string fieldName = 3;
inline int SelectRequest::_internal_fieldname_size() const {
  return _impl_.fieldname_.size();
}
inline int SelectRequest::fieldname_size() const {
  return _internal_fieldname_size();
}
inline void SelectRequest::clear_fieldname() {
  _impl_.fieldname_.Clear();
}
inline std::string* SelectRequest::add_fieldname() {
  std::string* _s = _internal_add_fieldname();
  // @@protoc_insertion_point(field_add_mutable:SQL.SelectRequest.fieldName)
  return _s;
}
inline const std::string& SelectRequest::_internal_fieldname(int index) const {
  return _impl_.fieldname_.Get(index);
}
inline const std::string& SelectRequest::fieldname(int index) const {
  // @@protoc_insertion_point(field_get:SQL.SelectRequest.fieldName)
  return _internal_fieldname(index);
}
inline std::string* SelectRequest::mutable_fieldname(int index) {
  // @@protoc_insertion_point(field_mutable:SQL.SelectRequest.fieldName)
  return _impl_.fieldname_.Mutable(index);
}
inline void SelectRequest::set_fieldname(int index, const std::string& value) {
  _impl_.fieldname_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::set_fieldname(int index, std::string&& value) {
  _impl_.fieldname_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::set_fieldname(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.fieldname_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::set_fieldname(int index, const char* value, size_t size) {
  _impl_.fieldname_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:SQL.SelectRequest.fieldName)
}
inline std::string* SelectRequest::_internal_add_fieldname() {
  return _impl_.fieldname_.Add();
}
inline void SelectRequest::add_fieldname(const std::string& value) {
  _impl_.fieldname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::add_fieldname(std::string&& value) {
  _impl_.fieldname_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::add_fieldname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.fieldname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:SQL.SelectRequest.fieldName)
}
inline void SelectRequest::add_fieldname(const char* value, size_t size) {
  _impl_.fieldname_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:SQL.SelectRequest.fieldName)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SelectRequest::fieldname() const {
  // @@protoc_insertion_point(field_list:SQL.SelectRequest.fieldName)
  return _impl_.fieldname_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SelectRequest::mutable_fieldname() {
  // @@protoc_insertion_point(field_mutable_list:SQL.SelectRequest.fieldName)
  return &_impl_.fieldname_;
}

// -------------------------------------------------------------------

// SelectResponse

// string result = 1;
inline void SelectResponse::clear_result() {
  _impl_.result_.ClearToEmpty();
}
inline const std::string& SelectResponse::result() const {
  // @@protoc_insertion_point(field_get:SQL.SelectResponse.result)
  return _internal_result();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SelectResponse::set_result(ArgT0&& arg0, ArgT... args) {
 
 _impl_.result_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SQL.SelectResponse.result)
}
inline std::string* SelectResponse::mutable_result() {
  std::string* _s = _internal_mutable_result();
  // @@protoc_insertion_point(field_mutable:SQL.SelectResponse.result)
  return _s;
}
inline const std::string& SelectResponse::_internal_result() const {
  return _impl_.result_.Get();
}
inline void SelectResponse::_internal_set_result(const std::string& value) {
  
  _impl_.result_.Set(value, GetArenaForAllocation());
}
inline std::string* SelectResponse::_internal_mutable_result() {
  
  return _impl_.result_.Mutable(GetArenaForAllocation());
}
inline std::string* SelectResponse::release_result() {
  // @@protoc_insertion_point(field_release:SQL.SelectResponse.result)
  return _impl_.result_.Release();
}
inline void SelectResponse::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  _impl_.result_.SetAllocated(result, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.result_.IsDefault()) {
    _impl_.result_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SQL.SelectResponse.result)
}

// string errInfo = 2;
inline void SelectResponse::clear_errinfo() {
  _impl_.errinfo_.ClearToEmpty();
}
inline const std::string& SelectResponse::errinfo() const {
  // @@protoc_insertion_point(field_get:SQL.SelectResponse.errInfo)
  return _internal_errinfo();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SelectResponse::set_errinfo(ArgT0&& arg0, ArgT... args) {
 
 _impl_.errinfo_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:SQL.SelectResponse.errInfo)
}
inline std::string* SelectResponse::mutable_errinfo() {
  std::string* _s = _internal_mutable_errinfo();
  // @@protoc_insertion_point(field_mutable:SQL.SelectResponse.errInfo)
  return _s;
}
inline const std::string& SelectResponse::_internal_errinfo() const {
  return _impl_.errinfo_.Get();
}
inline void SelectResponse::_internal_set_errinfo(const std::string& value) {
  
  _impl_.errinfo_.Set(value, GetArenaForAllocation());
}
inline std::string* SelectResponse::_internal_mutable_errinfo() {
  
  return _impl_.errinfo_.Mutable(GetArenaForAllocation());
}
inline std::string* SelectResponse::release_errinfo() {
  // @@protoc_insertion_point(field_release:SQL.SelectResponse.errInfo)
  return _impl_.errinfo_.Release();
}
inline void SelectResponse::set_allocated_errinfo(std::string* errinfo) {
  if (errinfo != nullptr) {
    
  } else {
    
  }
  _impl_.errinfo_.SetAllocated(errinfo, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.errinfo_.IsDefault()) {
    _impl_.errinfo_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:SQL.SelectResponse.errInfo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace SQL

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SQL_2eproto