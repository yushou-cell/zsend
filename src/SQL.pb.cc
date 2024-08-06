// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SQL.proto

#include "SQL.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace SQL {
PROTOBUF_CONSTEXPR SelectRequest::SelectRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.tablename_)*/{}
  , /*decltype(_impl_.fieldname_)*/{}
  , /*decltype(_impl_.sql_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SelectRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SelectRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SelectRequestDefaultTypeInternal() {}
  union {
    SelectRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SelectRequestDefaultTypeInternal _SelectRequest_default_instance_;
PROTOBUF_CONSTEXPR SelectResponse::SelectResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.result_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.errinfo_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SelectResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SelectResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SelectResponseDefaultTypeInternal() {}
  union {
    SelectResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SelectResponseDefaultTypeInternal _SelectResponse_default_instance_;
}  // namespace SQL
static ::_pb::Metadata file_level_metadata_SQL_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SQL_2eproto = nullptr;
static const ::_pb::ServiceDescriptor* file_level_service_descriptors_SQL_2eproto[1];

const uint32_t TableStruct_SQL_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SQL::SelectRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SQL::SelectRequest, _impl_.sql_),
  PROTOBUF_FIELD_OFFSET(::SQL::SelectRequest, _impl_.tablename_),
  PROTOBUF_FIELD_OFFSET(::SQL::SelectRequest, _impl_.fieldname_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SQL::SelectResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SQL::SelectResponse, _impl_.result_),
  PROTOBUF_FIELD_OFFSET(::SQL::SelectResponse, _impl_.errinfo_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::SQL::SelectRequest)},
  { 9, -1, -1, sizeof(::SQL::SelectResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::SQL::_SelectRequest_default_instance_._instance,
  &::SQL::_SelectResponse_default_instance_._instance,
};

const char descriptor_table_protodef_SQL_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tSQL.proto\022\003SQL\"B\n\rSelectRequest\022\013\n\003sql"
  "\030\001 \001(\t\022\021\n\ttableName\030\002 \003(\t\022\021\n\tfieldName\030\003"
  " \003(\t\"1\n\016SelectResponse\022\016\n\006result\030\001 \001(\t\022\017"
  "\n\007errInfo\030\002 \001(\t2D\n\tSQLHandle\0227\n\014SelectHa"
  "ndle\022\022.SQL.SelectRequest\032\023.SQL.SelectRes"
  "ponseB\003\200\001\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_SQL_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SQL_2eproto = {
    false, false, 218, descriptor_table_protodef_SQL_2eproto,
    "SQL.proto",
    &descriptor_table_SQL_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_SQL_2eproto::offsets,
    file_level_metadata_SQL_2eproto, file_level_enum_descriptors_SQL_2eproto,
    file_level_service_descriptors_SQL_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SQL_2eproto_getter() {
  return &descriptor_table_SQL_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SQL_2eproto(&descriptor_table_SQL_2eproto);
namespace SQL {

// ===================================================================

class SelectRequest::_Internal {
 public:
};

SelectRequest::SelectRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SQL.SelectRequest)
}
SelectRequest::SelectRequest(const SelectRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SelectRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.tablename_){from._impl_.tablename_}
    , decltype(_impl_.fieldname_){from._impl_.fieldname_}
    , decltype(_impl_.sql_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.sql_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sql_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sql().empty()) {
    _this->_impl_.sql_.Set(from._internal_sql(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:SQL.SelectRequest)
}

inline void SelectRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.tablename_){arena}
    , decltype(_impl_.fieldname_){arena}
    , decltype(_impl_.sql_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.sql_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sql_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SelectRequest::~SelectRequest() {
  // @@protoc_insertion_point(destructor:SQL.SelectRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SelectRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.tablename_.~RepeatedPtrField();
  _impl_.fieldname_.~RepeatedPtrField();
  _impl_.sql_.Destroy();
}

void SelectRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SelectRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:SQL.SelectRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.tablename_.Clear();
  _impl_.fieldname_.Clear();
  _impl_.sql_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SelectRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string sql = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_sql();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "SQL.SelectRequest.sql"));
        } else
          goto handle_unusual;
        continue;
      // repeated string tableName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_tablename();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "SQL.SelectRequest.tableName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string fieldName = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_fieldname();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "SQL.SelectRequest.fieldName"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SelectRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SQL.SelectRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string sql = 1;
  if (!this->_internal_sql().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sql().data(), static_cast<int>(this->_internal_sql().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SQL.SelectRequest.sql");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_sql(), target);
  }

  // repeated string tableName = 2;
  for (int i = 0, n = this->_internal_tablename_size(); i < n; i++) {
    const auto& s = this->_internal_tablename(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SQL.SelectRequest.tableName");
    target = stream->WriteString(2, s, target);
  }

  // repeated string fieldName = 3;
  for (int i = 0, n = this->_internal_fieldname_size(); i < n; i++) {
    const auto& s = this->_internal_fieldname(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SQL.SelectRequest.fieldName");
    target = stream->WriteString(3, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SQL.SelectRequest)
  return target;
}

size_t SelectRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SQL.SelectRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string tableName = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.tablename_.size());
  for (int i = 0, n = _impl_.tablename_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.tablename_.Get(i));
  }

  // repeated string fieldName = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.fieldname_.size());
  for (int i = 0, n = _impl_.fieldname_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.fieldname_.Get(i));
  }

  // string sql = 1;
  if (!this->_internal_sql().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sql());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SelectRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SelectRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SelectRequest::GetClassData() const { return &_class_data_; }


void SelectRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SelectRequest*>(&to_msg);
  auto& from = static_cast<const SelectRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SQL.SelectRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.tablename_.MergeFrom(from._impl_.tablename_);
  _this->_impl_.fieldname_.MergeFrom(from._impl_.fieldname_);
  if (!from._internal_sql().empty()) {
    _this->_internal_set_sql(from._internal_sql());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SelectRequest::CopyFrom(const SelectRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SQL.SelectRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SelectRequest::IsInitialized() const {
  return true;
}

void SelectRequest::InternalSwap(SelectRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.tablename_.InternalSwap(&other->_impl_.tablename_);
  _impl_.fieldname_.InternalSwap(&other->_impl_.fieldname_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sql_, lhs_arena,
      &other->_impl_.sql_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SelectRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SQL_2eproto_getter, &descriptor_table_SQL_2eproto_once,
      file_level_metadata_SQL_2eproto[0]);
}

// ===================================================================

class SelectResponse::_Internal {
 public:
};

SelectResponse::SelectResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SQL.SelectResponse)
}
SelectResponse::SelectResponse(const SelectResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SelectResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , decltype(_impl_.errinfo_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_result().empty()) {
    _this->_impl_.result_.Set(from._internal_result(), 
      _this->GetArenaForAllocation());
  }
  _impl_.errinfo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.errinfo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_errinfo().empty()) {
    _this->_impl_.errinfo_.Set(from._internal_errinfo(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:SQL.SelectResponse)
}

inline void SelectResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.result_){}
    , decltype(_impl_.errinfo_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.errinfo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.errinfo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SelectResponse::~SelectResponse() {
  // @@protoc_insertion_point(destructor:SQL.SelectResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SelectResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.result_.Destroy();
  _impl_.errinfo_.Destroy();
}

void SelectResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SelectResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:SQL.SelectResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_.ClearToEmpty();
  _impl_.errinfo_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SelectResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_result();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "SQL.SelectResponse.result"));
        } else
          goto handle_unusual;
        continue;
      // string errInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_errinfo();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "SQL.SelectResponse.errInfo"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SelectResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SQL.SelectResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result().data(), static_cast<int>(this->_internal_result().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SQL.SelectResponse.result");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_result(), target);
  }

  // string errInfo = 2;
  if (!this->_internal_errinfo().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_errinfo().data(), static_cast<int>(this->_internal_errinfo().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "SQL.SelectResponse.errInfo");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_errinfo(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SQL.SelectResponse)
  return target;
}

size_t SelectResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SQL.SelectResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result());
  }

  // string errInfo = 2;
  if (!this->_internal_errinfo().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_errinfo());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SelectResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SelectResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SelectResponse::GetClassData() const { return &_class_data_; }


void SelectResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SelectResponse*>(&to_msg);
  auto& from = static_cast<const SelectResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SQL.SelectResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_result().empty()) {
    _this->_internal_set_result(from._internal_result());
  }
  if (!from._internal_errinfo().empty()) {
    _this->_internal_set_errinfo(from._internal_errinfo());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SelectResponse::CopyFrom(const SelectResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SQL.SelectResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SelectResponse::IsInitialized() const {
  return true;
}

void SelectResponse::InternalSwap(SelectResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.result_, lhs_arena,
      &other->_impl_.result_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.errinfo_, lhs_arena,
      &other->_impl_.errinfo_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SelectResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SQL_2eproto_getter, &descriptor_table_SQL_2eproto_once,
      file_level_metadata_SQL_2eproto[1]);
}

// ===================================================================

SQLHandle::~SQLHandle() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* SQLHandle::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_SQL_2eproto);
  return file_level_service_descriptors_SQL_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* SQLHandle::GetDescriptor() {
  return descriptor();
}

void SQLHandle::SelectHandle(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::SQL::SelectRequest*,
                         ::SQL::SelectResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method SelectHandle() not implemented.");
  done->Run();
}

void SQLHandle::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_SQL_2eproto[0]);
  switch(method->index()) {
    case 0:
      SelectHandle(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::SQL::SelectRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::SQL::SelectResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& SQLHandle::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::SQL::SelectRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& SQLHandle::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::SQL::SelectResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

SQLHandle_Stub::SQLHandle_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
SQLHandle_Stub::SQLHandle_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
SQLHandle_Stub::~SQLHandle_Stub() {
  if (owns_channel_) delete channel_;
}

void SQLHandle_Stub::SelectHandle(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::SQL::SelectRequest* request,
                              ::SQL::SelectResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SQL
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SQL::SelectRequest*
Arena::CreateMaybeMessage< ::SQL::SelectRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SQL::SelectRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::SQL::SelectResponse*
Arena::CreateMaybeMessage< ::SQL::SelectResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SQL::SelectResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>