// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/services/instance/instance.proto

#include "proto/services/instance/instance.pb.h"

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

namespace spielbrett {
namespace services {
namespace instance {
PROTOBUF_CONSTEXPR CreateInstanceRequest::CreateInstanceRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.session_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.instance_type_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CreateInstanceRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CreateInstanceRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CreateInstanceRequestDefaultTypeInternal() {}
  union {
    CreateInstanceRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CreateInstanceRequestDefaultTypeInternal _CreateInstanceRequest_default_instance_;
PROTOBUF_CONSTEXPR CreateInstanceResponse::CreateInstanceResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.instance_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.endpoint_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CreateInstanceResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CreateInstanceResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CreateInstanceResponseDefaultTypeInternal() {}
  union {
    CreateInstanceResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CreateInstanceResponseDefaultTypeInternal _CreateInstanceResponse_default_instance_;
}  // namespace instance
}  // namespace services
}  // namespace spielbrett
static ::_pb::Metadata file_level_metadata_proto_2fservices_2finstance_2finstance_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_proto_2fservices_2finstance_2finstance_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_proto_2fservices_2finstance_2finstance_2eproto = nullptr;

const uint32_t TableStruct_proto_2fservices_2finstance_2finstance_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceRequest, _impl_.session_id_),
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceRequest, _impl_.instance_type_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceResponse, _impl_.instance_id_),
  PROTOBUF_FIELD_OFFSET(::spielbrett::services::instance::CreateInstanceResponse, _impl_.endpoint_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::spielbrett::services::instance::CreateInstanceRequest)},
  { 8, -1, -1, sizeof(::spielbrett::services::instance::CreateInstanceResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::spielbrett::services::instance::_CreateInstanceRequest_default_instance_._instance,
  &::spielbrett::services::instance::_CreateInstanceResponse_default_instance_._instance,
};

const char descriptor_table_protodef_proto_2fservices_2finstance_2finstance_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&proto/services/instance/instance.proto"
  "\022\034spielbrett.services.instance\"[\n\025Create"
  "InstanceRequest\022\035\n\nsession_id\030\001 \001(\tR\tses"
  "sionId\022#\n\rinstance_type\030\002 \001(\tR\014instanceT"
  "ype\"U\n\026CreateInstanceResponse\022\037\n\013instanc"
  "e_id\030\001 \001(\tR\ninstanceId\022\032\n\010endpoint\030\002 \001(\t"
  "R\010endpoint2\220\001\n\017InstanceService\022}\n\016Create"
  "Instance\0223.spielbrett.services.instance."
  "CreateInstanceRequest\0324.spielbrett.servi"
  "ces.instance.CreateInstanceResponse\"\000BEZ"
  "Cgithub.com/spielbrett/spielbrett-api/ge"
  "n/go/proto/services/instanceb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proto_2fservices_2finstance_2finstance_2eproto = {
    false, false, 476, descriptor_table_protodef_proto_2fservices_2finstance_2finstance_2eproto,
    "proto/services/instance/instance.proto",
    &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_proto_2fservices_2finstance_2finstance_2eproto::offsets,
    file_level_metadata_proto_2fservices_2finstance_2finstance_2eproto, file_level_enum_descriptors_proto_2fservices_2finstance_2finstance_2eproto,
    file_level_service_descriptors_proto_2fservices_2finstance_2finstance_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_getter() {
  return &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proto_2fservices_2finstance_2finstance_2eproto(&descriptor_table_proto_2fservices_2finstance_2finstance_2eproto);
namespace spielbrett {
namespace services {
namespace instance {

// ===================================================================

class CreateInstanceRequest::_Internal {
 public:
};

CreateInstanceRequest::CreateInstanceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:spielbrett.services.instance.CreateInstanceRequest)
}
CreateInstanceRequest::CreateInstanceRequest(const CreateInstanceRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CreateInstanceRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.session_id_){}
    , decltype(_impl_.instance_type_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.session_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.session_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_session_id().empty()) {
    _this->_impl_.session_id_.Set(from._internal_session_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.instance_type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instance_type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_instance_type().empty()) {
    _this->_impl_.instance_type_.Set(from._internal_instance_type(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:spielbrett.services.instance.CreateInstanceRequest)
}

inline void CreateInstanceRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.session_id_){}
    , decltype(_impl_.instance_type_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.session_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.session_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.instance_type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instance_type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CreateInstanceRequest::~CreateInstanceRequest() {
  // @@protoc_insertion_point(destructor:spielbrett.services.instance.CreateInstanceRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CreateInstanceRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.session_id_.Destroy();
  _impl_.instance_type_.Destroy();
}

void CreateInstanceRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CreateInstanceRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:spielbrett.services.instance.CreateInstanceRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.session_id_.ClearToEmpty();
  _impl_.instance_type_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CreateInstanceRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string session_id = 1 [json_name = "sessionId"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_session_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "spielbrett.services.instance.CreateInstanceRequest.session_id"));
        } else
          goto handle_unusual;
        continue;
      // string instance_type = 2 [json_name = "instanceType"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_instance_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "spielbrett.services.instance.CreateInstanceRequest.instance_type"));
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

uint8_t* CreateInstanceRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:spielbrett.services.instance.CreateInstanceRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string session_id = 1 [json_name = "sessionId"];
  if (!this->_internal_session_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_session_id().data(), static_cast<int>(this->_internal_session_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "spielbrett.services.instance.CreateInstanceRequest.session_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_session_id(), target);
  }

  // string instance_type = 2 [json_name = "instanceType"];
  if (!this->_internal_instance_type().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instance_type().data(), static_cast<int>(this->_internal_instance_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "spielbrett.services.instance.CreateInstanceRequest.instance_type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_instance_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:spielbrett.services.instance.CreateInstanceRequest)
  return target;
}

size_t CreateInstanceRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:spielbrett.services.instance.CreateInstanceRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string session_id = 1 [json_name = "sessionId"];
  if (!this->_internal_session_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_session_id());
  }

  // string instance_type = 2 [json_name = "instanceType"];
  if (!this->_internal_instance_type().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instance_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CreateInstanceRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CreateInstanceRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CreateInstanceRequest::GetClassData() const { return &_class_data_; }


void CreateInstanceRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CreateInstanceRequest*>(&to_msg);
  auto& from = static_cast<const CreateInstanceRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:spielbrett.services.instance.CreateInstanceRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_session_id().empty()) {
    _this->_internal_set_session_id(from._internal_session_id());
  }
  if (!from._internal_instance_type().empty()) {
    _this->_internal_set_instance_type(from._internal_instance_type());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CreateInstanceRequest::CopyFrom(const CreateInstanceRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:spielbrett.services.instance.CreateInstanceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateInstanceRequest::IsInitialized() const {
  return true;
}

void CreateInstanceRequest::InternalSwap(CreateInstanceRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.session_id_, lhs_arena,
      &other->_impl_.session_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.instance_type_, lhs_arena,
      &other->_impl_.instance_type_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CreateInstanceRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_getter, &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_once,
      file_level_metadata_proto_2fservices_2finstance_2finstance_2eproto[0]);
}

// ===================================================================

class CreateInstanceResponse::_Internal {
 public:
};

CreateInstanceResponse::CreateInstanceResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:spielbrett.services.instance.CreateInstanceResponse)
}
CreateInstanceResponse::CreateInstanceResponse(const CreateInstanceResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CreateInstanceResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.instance_id_){}
    , decltype(_impl_.endpoint_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.instance_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instance_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_instance_id().empty()) {
    _this->_impl_.instance_id_.Set(from._internal_instance_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.endpoint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.endpoint_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_endpoint().empty()) {
    _this->_impl_.endpoint_.Set(from._internal_endpoint(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:spielbrett.services.instance.CreateInstanceResponse)
}

inline void CreateInstanceResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.instance_id_){}
    , decltype(_impl_.endpoint_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.instance_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instance_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.endpoint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.endpoint_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CreateInstanceResponse::~CreateInstanceResponse() {
  // @@protoc_insertion_point(destructor:spielbrett.services.instance.CreateInstanceResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CreateInstanceResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.instance_id_.Destroy();
  _impl_.endpoint_.Destroy();
}

void CreateInstanceResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CreateInstanceResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:spielbrett.services.instance.CreateInstanceResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.instance_id_.ClearToEmpty();
  _impl_.endpoint_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CreateInstanceResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string instance_id = 1 [json_name = "instanceId"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_instance_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "spielbrett.services.instance.CreateInstanceResponse.instance_id"));
        } else
          goto handle_unusual;
        continue;
      // string endpoint = 2 [json_name = "endpoint"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_endpoint();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "spielbrett.services.instance.CreateInstanceResponse.endpoint"));
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

uint8_t* CreateInstanceResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:spielbrett.services.instance.CreateInstanceResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string instance_id = 1 [json_name = "instanceId"];
  if (!this->_internal_instance_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instance_id().data(), static_cast<int>(this->_internal_instance_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "spielbrett.services.instance.CreateInstanceResponse.instance_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_instance_id(), target);
  }

  // string endpoint = 2 [json_name = "endpoint"];
  if (!this->_internal_endpoint().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_endpoint().data(), static_cast<int>(this->_internal_endpoint().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "spielbrett.services.instance.CreateInstanceResponse.endpoint");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_endpoint(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:spielbrett.services.instance.CreateInstanceResponse)
  return target;
}

size_t CreateInstanceResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:spielbrett.services.instance.CreateInstanceResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string instance_id = 1 [json_name = "instanceId"];
  if (!this->_internal_instance_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instance_id());
  }

  // string endpoint = 2 [json_name = "endpoint"];
  if (!this->_internal_endpoint().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_endpoint());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CreateInstanceResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CreateInstanceResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CreateInstanceResponse::GetClassData() const { return &_class_data_; }


void CreateInstanceResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CreateInstanceResponse*>(&to_msg);
  auto& from = static_cast<const CreateInstanceResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:spielbrett.services.instance.CreateInstanceResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_instance_id().empty()) {
    _this->_internal_set_instance_id(from._internal_instance_id());
  }
  if (!from._internal_endpoint().empty()) {
    _this->_internal_set_endpoint(from._internal_endpoint());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CreateInstanceResponse::CopyFrom(const CreateInstanceResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:spielbrett.services.instance.CreateInstanceResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateInstanceResponse::IsInitialized() const {
  return true;
}

void CreateInstanceResponse::InternalSwap(CreateInstanceResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.instance_id_, lhs_arena,
      &other->_impl_.instance_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.endpoint_, lhs_arena,
      &other->_impl_.endpoint_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CreateInstanceResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_getter, &descriptor_table_proto_2fservices_2finstance_2finstance_2eproto_once,
      file_level_metadata_proto_2fservices_2finstance_2finstance_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace instance
}  // namespace services
}  // namespace spielbrett
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::spielbrett::services::instance::CreateInstanceRequest*
Arena::CreateMaybeMessage< ::spielbrett::services::instance::CreateInstanceRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::spielbrett::services::instance::CreateInstanceRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::spielbrett::services::instance::CreateInstanceResponse*
Arena::CreateMaybeMessage< ::spielbrett::services::instance::CreateInstanceResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::spielbrett::services::instance::CreateInstanceResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
