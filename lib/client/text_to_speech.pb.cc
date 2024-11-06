// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: text_to_speech.proto

#include "text_to_speech.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace rero {
template <typename>
PROTOBUF_CONSTEXPR TTSRequest::TTSRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.text_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TTSRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TTSRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TTSRequestDefaultTypeInternal() {}
  union {
    TTSRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TTSRequestDefaultTypeInternal _TTSRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR TTSResponse::TTSResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.status_)*/ false

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TTSResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TTSResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TTSResponseDefaultTypeInternal() {}
  union {
    TTSResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TTSResponseDefaultTypeInternal _TTSResponse_default_instance_;
}  // namespace rero
static ::_pb::Metadata file_level_metadata_text_5fto_5fspeech_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_text_5fto_5fspeech_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_text_5fto_5fspeech_2eproto = nullptr;
const ::uint32_t TableStruct_text_5fto_5fspeech_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::rero::TTSRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::rero::TTSRequest, _impl_.text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::rero::TTSResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::rero::TTSResponse, _impl_.status_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::rero::TTSRequest)},
        { 9, -1, -1, sizeof(::rero::TTSResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::rero::_TTSRequest_default_instance_._instance,
    &::rero::_TTSResponse_default_instance_._instance,
};
const char descriptor_table_protodef_text_5fto_5fspeech_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\024text_to_speech.proto\022\004rero\"\032\n\nTTSReque"
    "st\022\014\n\004text\030\001 \001(\t\"\035\n\013TTSResponse\022\016\n\006statu"
    "s\030\001 \001(\0102<\n\014TextToSpeech\022,\n\003TTS\022\020.rero.TT"
    "SRequest\032\021.rero.TTSResponse\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_text_5fto_5fspeech_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_text_5fto_5fspeech_2eproto = {
    false,
    false,
    157,
    descriptor_table_protodef_text_5fto_5fspeech_2eproto,
    "text_to_speech.proto",
    &descriptor_table_text_5fto_5fspeech_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_text_5fto_5fspeech_2eproto::offsets,
    file_level_metadata_text_5fto_5fspeech_2eproto,
    file_level_enum_descriptors_text_5fto_5fspeech_2eproto,
    file_level_service_descriptors_text_5fto_5fspeech_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_text_5fto_5fspeech_2eproto_getter() {
  return &descriptor_table_text_5fto_5fspeech_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_text_5fto_5fspeech_2eproto(&descriptor_table_text_5fto_5fspeech_2eproto);
namespace rero {
// ===================================================================

class TTSRequest::_Internal {
 public:
};

TTSRequest::TTSRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:rero.TTSRequest)
}
TTSRequest::TTSRequest(const TTSRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TTSRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.text_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    _this->_impl_.text_.Set(from._internal_text(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:rero.TTSRequest)
}

inline void TTSRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.text_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TTSRequest::~TTSRequest() {
  // @@protoc_insertion_point(destructor:rero.TTSRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TTSRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.text_.Destroy();
}

void TTSRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TTSRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:rero.TTSRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.text_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TTSRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string text = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_text();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.TTSRequest.text"));
        } else {
          goto handle_unusual;
        }
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

::uint8_t* TTSRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rero.TTSRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string text = 1;
  if (!this->_internal_text().empty()) {
    const std::string& _s = this->_internal_text();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.TTSRequest.text");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rero.TTSRequest)
  return target;
}

::size_t TTSRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rero.TTSRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 1;
  if (!this->_internal_text().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_text());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TTSRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TTSRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TTSRequest::GetClassData() const { return &_class_data_; }


void TTSRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TTSRequest*>(&to_msg);
  auto& from = static_cast<const TTSRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:rero.TTSRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TTSRequest::CopyFrom(const TTSRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rero.TTSRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TTSRequest::IsInitialized() const {
  return true;
}

void TTSRequest::InternalSwap(TTSRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, lhs_arena,
                                       &other->_impl_.text_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata TTSRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_text_5fto_5fspeech_2eproto_getter, &descriptor_table_text_5fto_5fspeech_2eproto_once,
      file_level_metadata_text_5fto_5fspeech_2eproto[0]);
}
// ===================================================================

class TTSResponse::_Internal {
 public:
};

TTSResponse::TTSResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:rero.TTSResponse)
}
TTSResponse::TTSResponse(const TTSResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:rero.TTSResponse)
}

inline void TTSResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.status_) { false }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

TTSResponse::~TTSResponse() {
  // @@protoc_insertion_point(destructor:rero.TTSResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TTSResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void TTSResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TTSResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:rero.TTSResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.status_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TTSResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
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

::uint8_t* TTSResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rero.TTSResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rero.TTSResponse)
  return target;
}

::size_t TTSResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rero.TTSResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool status = 1;
  if (this->_internal_status() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TTSResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TTSResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TTSResponse::GetClassData() const { return &_class_data_; }


void TTSResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TTSResponse*>(&to_msg);
  auto& from = static_cast<const TTSResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:rero.TTSResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TTSResponse::CopyFrom(const TTSResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rero.TTSResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TTSResponse::IsInitialized() const {
  return true;
}

void TTSResponse::InternalSwap(TTSResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);

  swap(_impl_.status_, other->_impl_.status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TTSResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_text_5fto_5fspeech_2eproto_getter, &descriptor_table_text_5fto_5fspeech_2eproto_once,
      file_level_metadata_text_5fto_5fspeech_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace rero
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::rero::TTSRequest*
Arena::CreateMaybeMessage< ::rero::TTSRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rero::TTSRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::rero::TTSResponse*
Arena::CreateMaybeMessage< ::rero::TTSResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rero::TTSResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
