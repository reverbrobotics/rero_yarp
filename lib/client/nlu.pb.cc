// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nlu.proto

#include "nlu.pb.h"

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
PROTOBUF_CONSTEXPR NLURequest::NLURequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.request_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct NLURequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NLURequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~NLURequestDefaultTypeInternal() {}
  union {
    NLURequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NLURequestDefaultTypeInternal _NLURequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Intent::Intent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.slots_)*/{}
  , /*decltype(_impl_.inputtext_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.intentname_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.probability_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct IntentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR IntentDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~IntentDefaultTypeInternal() {}
  union {
    Intent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 IntentDefaultTypeInternal _Intent_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR Slot::Slot(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.rawvalue_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.entity_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.slotname_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.rangestart_)*/ 0u

  , /*decltype(_impl_.rangeend_)*/ 0u

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SlotDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SlotDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SlotDefaultTypeInternal() {}
  union {
    Slot _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SlotDefaultTypeInternal _Slot_default_instance_;
}  // namespace rero
static ::_pb::Metadata file_level_metadata_nlu_2eproto[3];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_nlu_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_nlu_2eproto = nullptr;
const ::uint32_t TableStruct_nlu_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::rero::NLURequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::rero::NLURequest, _impl_.request_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::rero::Intent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::rero::Intent, _impl_.inputtext_),
    PROTOBUF_FIELD_OFFSET(::rero::Intent, _impl_.intentname_),
    PROTOBUF_FIELD_OFFSET(::rero::Intent, _impl_.probability_),
    PROTOBUF_FIELD_OFFSET(::rero::Intent, _impl_.slots_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _impl_.rawvalue_),
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _impl_.entity_),
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _impl_.slotname_),
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _impl_.rangestart_),
    PROTOBUF_FIELD_OFFSET(::rero::Slot, _impl_.rangeend_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::rero::NLURequest)},
        { 9, -1, -1, sizeof(::rero::Intent)},
        { 21, -1, -1, sizeof(::rero::Slot)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::rero::_NLURequest_default_instance_._instance,
    &::rero::_Intent_default_instance_._instance,
    &::rero::_Slot_default_instance_._instance,
};
const char descriptor_table_protodef_nlu_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\tnlu.proto\022\004rero\"\035\n\nNLURequest\022\017\n\007reque"
    "st\030\001 \001(\t\"_\n\006Intent\022\021\n\tinputText\030\001 \001(\t\022\022\n"
    "\nintentName\030\002 \001(\t\022\023\n\013probability\030\003 \001(\002\022\031"
    "\n\005slots\030\004 \003(\0132\n.rero.Slot\"`\n\004Slot\022\020\n\010raw"
    "Value\030\001 \001(\t\022\016\n\006entity\030\002 \001(\t\022\020\n\010slotName\030"
    "\003 \001(\t\022\022\n\nrangeStart\030\004 \001(\r\022\020\n\010rangeEnd\030\005 "
    "\001(\r2:\n\003NLU\0223\n\017GetSpeechIntent\022\020.rero.NLU"
    "Request\032\014.rero.Intent\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_nlu_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_nlu_2eproto = {
    false,
    false,
    311,
    descriptor_table_protodef_nlu_2eproto,
    "nlu.proto",
    &descriptor_table_nlu_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_nlu_2eproto::offsets,
    file_level_metadata_nlu_2eproto,
    file_level_enum_descriptors_nlu_2eproto,
    file_level_service_descriptors_nlu_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_nlu_2eproto_getter() {
  return &descriptor_table_nlu_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_nlu_2eproto(&descriptor_table_nlu_2eproto);
namespace rero {
// ===================================================================

class NLURequest::_Internal {
 public:
};

NLURequest::NLURequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:rero.NLURequest)
}
NLURequest::NLURequest(const NLURequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  NLURequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.request_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.request_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.request_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_request().empty()) {
    _this->_impl_.request_.Set(from._internal_request(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:rero.NLURequest)
}

inline void NLURequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.request_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.request_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.request_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

NLURequest::~NLURequest() {
  // @@protoc_insertion_point(destructor:rero.NLURequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NLURequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.request_.Destroy();
}

void NLURequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NLURequest::Clear() {
// @@protoc_insertion_point(message_clear_start:rero.NLURequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.request_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NLURequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string request = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_request();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.NLURequest.request"));
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

::uint8_t* NLURequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rero.NLURequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string request = 1;
  if (!this->_internal_request().empty()) {
    const std::string& _s = this->_internal_request();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.NLURequest.request");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rero.NLURequest)
  return target;
}

::size_t NLURequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rero.NLURequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request = 1;
  if (!this->_internal_request().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_request());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NLURequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    NLURequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NLURequest::GetClassData() const { return &_class_data_; }


void NLURequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<NLURequest*>(&to_msg);
  auto& from = static_cast<const NLURequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:rero.NLURequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_request().empty()) {
    _this->_internal_set_request(from._internal_request());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NLURequest::CopyFrom(const NLURequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rero.NLURequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NLURequest::IsInitialized() const {
  return true;
}

void NLURequest::InternalSwap(NLURequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.request_, lhs_arena,
                                       &other->_impl_.request_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata NLURequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_nlu_2eproto_getter, &descriptor_table_nlu_2eproto_once,
      file_level_metadata_nlu_2eproto[0]);
}
// ===================================================================

class Intent::_Internal {
 public:
};

Intent::Intent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:rero.Intent)
}
Intent::Intent(const Intent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Intent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.slots_){from._impl_.slots_}
    , decltype(_impl_.inputtext_) {}

    , decltype(_impl_.intentname_) {}

    , decltype(_impl_.probability_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.inputtext_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.inputtext_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_inputtext().empty()) {
    _this->_impl_.inputtext_.Set(from._internal_inputtext(), _this->GetArenaForAllocation());
  }
  _impl_.intentname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.intentname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_intentname().empty()) {
    _this->_impl_.intentname_.Set(from._internal_intentname(), _this->GetArenaForAllocation());
  }
  _this->_impl_.probability_ = from._impl_.probability_;
  // @@protoc_insertion_point(copy_constructor:rero.Intent)
}

inline void Intent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.slots_){arena}
    , decltype(_impl_.inputtext_) {}

    , decltype(_impl_.intentname_) {}

    , decltype(_impl_.probability_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.inputtext_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.inputtext_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.intentname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.intentname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Intent::~Intent() {
  // @@protoc_insertion_point(destructor:rero.Intent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Intent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_slots()->~RepeatedPtrField();
  _impl_.inputtext_.Destroy();
  _impl_.intentname_.Destroy();
}

void Intent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Intent::Clear() {
// @@protoc_insertion_point(message_clear_start:rero.Intent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_slots()->Clear();
  _impl_.inputtext_.ClearToEmpty();
  _impl_.intentname_.ClearToEmpty();
  _impl_.probability_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Intent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string inputText = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_inputtext();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.Intent.inputText"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string intentName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_intentname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.Intent.intentName"));
        } else {
          goto handle_unusual;
        }
        continue;
      // float probability = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 29)) {
          _impl_.probability_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated .rero.Slot slots = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_slots(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

::uint8_t* Intent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rero.Intent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string inputText = 1;
  if (!this->_internal_inputtext().empty()) {
    const std::string& _s = this->_internal_inputtext();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.Intent.inputText");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string intentName = 2;
  if (!this->_internal_intentname().empty()) {
    const std::string& _s = this->_internal_intentname();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.Intent.intentName");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // float probability = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_probability = this->_internal_probability();
  ::uint32_t raw_probability;
  memcpy(&raw_probability, &tmp_probability, sizeof(tmp_probability));
  if (raw_probability != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_probability(), target);
  }

  // repeated .rero.Slot slots = 4;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_slots_size()); i < n; i++) {
    const auto& repfield = this->_internal_slots(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(4, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rero.Intent)
  return target;
}

::size_t Intent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rero.Intent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .rero.Slot slots = 4;
  total_size += 1UL * this->_internal_slots_size();
  for (const auto& msg : this->_internal_slots()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string inputText = 1;
  if (!this->_internal_inputtext().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_inputtext());
  }

  // string intentName = 2;
  if (!this->_internal_intentname().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_intentname());
  }

  // float probability = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_probability = this->_internal_probability();
  ::uint32_t raw_probability;
  memcpy(&raw_probability, &tmp_probability, sizeof(tmp_probability));
  if (raw_probability != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Intent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Intent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Intent::GetClassData() const { return &_class_data_; }


void Intent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Intent*>(&to_msg);
  auto& from = static_cast<const Intent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:rero.Intent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_slots()->MergeFrom(from._internal_slots());
  if (!from._internal_inputtext().empty()) {
    _this->_internal_set_inputtext(from._internal_inputtext());
  }
  if (!from._internal_intentname().empty()) {
    _this->_internal_set_intentname(from._internal_intentname());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float), "Code assumes ::uint32_t and float are the same size.");
  float tmp_probability = from._internal_probability();
  ::uint32_t raw_probability;
  memcpy(&raw_probability, &tmp_probability, sizeof(tmp_probability));
  if (raw_probability != 0) {
    _this->_internal_set_probability(from._internal_probability());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Intent::CopyFrom(const Intent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rero.Intent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Intent::IsInitialized() const {
  return true;
}

void Intent::InternalSwap(Intent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_slots()->InternalSwap(other->_internal_mutable_slots());
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.inputtext_, lhs_arena,
                                       &other->_impl_.inputtext_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.intentname_, lhs_arena,
                                       &other->_impl_.intentname_, rhs_arena);

  swap(_impl_.probability_, other->_impl_.probability_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Intent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_nlu_2eproto_getter, &descriptor_table_nlu_2eproto_once,
      file_level_metadata_nlu_2eproto[1]);
}
// ===================================================================

class Slot::_Internal {
 public:
};

Slot::Slot(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:rero.Slot)
}
Slot::Slot(const Slot& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Slot* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.rawvalue_) {}

    , decltype(_impl_.entity_) {}

    , decltype(_impl_.slotname_) {}

    , decltype(_impl_.rangestart_) {}

    , decltype(_impl_.rangeend_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.rawvalue_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.rawvalue_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_rawvalue().empty()) {
    _this->_impl_.rawvalue_.Set(from._internal_rawvalue(), _this->GetArenaForAllocation());
  }
  _impl_.entity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.entity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_entity().empty()) {
    _this->_impl_.entity_.Set(from._internal_entity(), _this->GetArenaForAllocation());
  }
  _impl_.slotname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.slotname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_slotname().empty()) {
    _this->_impl_.slotname_.Set(from._internal_slotname(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.rangestart_, &from._impl_.rangestart_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.rangeend_) -
    reinterpret_cast<char*>(&_impl_.rangestart_)) + sizeof(_impl_.rangeend_));
  // @@protoc_insertion_point(copy_constructor:rero.Slot)
}

inline void Slot::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.rawvalue_) {}

    , decltype(_impl_.entity_) {}

    , decltype(_impl_.slotname_) {}

    , decltype(_impl_.rangestart_) { 0u }

    , decltype(_impl_.rangeend_) { 0u }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.rawvalue_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.rawvalue_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.entity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.entity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.slotname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.slotname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Slot::~Slot() {
  // @@protoc_insertion_point(destructor:rero.Slot)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Slot::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.rawvalue_.Destroy();
  _impl_.entity_.Destroy();
  _impl_.slotname_.Destroy();
}

void Slot::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Slot::Clear() {
// @@protoc_insertion_point(message_clear_start:rero.Slot)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.rawvalue_.ClearToEmpty();
  _impl_.entity_.ClearToEmpty();
  _impl_.slotname_.ClearToEmpty();
  ::memset(&_impl_.rangestart_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.rangeend_) -
      reinterpret_cast<char*>(&_impl_.rangestart_)) + sizeof(_impl_.rangeend_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Slot::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string rawValue = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_rawvalue();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.Slot.rawValue"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string entity = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_entity();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.Slot.entity"));
        } else {
          goto handle_unusual;
        }
        continue;
      // string slotName = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_slotname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "rero.Slot.slotName"));
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 rangeStart = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _impl_.rangestart_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // uint32 rangeEnd = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _impl_.rangeend_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* Slot::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rero.Slot)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string rawValue = 1;
  if (!this->_internal_rawvalue().empty()) {
    const std::string& _s = this->_internal_rawvalue();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.Slot.rawValue");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string entity = 2;
  if (!this->_internal_entity().empty()) {
    const std::string& _s = this->_internal_entity();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.Slot.entity");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string slotName = 3;
  if (!this->_internal_slotname().empty()) {
    const std::string& _s = this->_internal_slotname();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "rero.Slot.slotName");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // uint32 rangeStart = 4;
  if (this->_internal_rangestart() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_rangestart(), target);
  }

  // uint32 rangeEnd = 5;
  if (this->_internal_rangeend() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_rangeend(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rero.Slot)
  return target;
}

::size_t Slot::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rero.Slot)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string rawValue = 1;
  if (!this->_internal_rawvalue().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_rawvalue());
  }

  // string entity = 2;
  if (!this->_internal_entity().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_entity());
  }

  // string slotName = 3;
  if (!this->_internal_slotname().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_slotname());
  }

  // uint32 rangeStart = 4;
  if (this->_internal_rangestart() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_rangestart());
  }

  // uint32 rangeEnd = 5;
  if (this->_internal_rangeend() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_rangeend());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Slot::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Slot::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Slot::GetClassData() const { return &_class_data_; }


void Slot::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Slot*>(&to_msg);
  auto& from = static_cast<const Slot&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:rero.Slot)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_rawvalue().empty()) {
    _this->_internal_set_rawvalue(from._internal_rawvalue());
  }
  if (!from._internal_entity().empty()) {
    _this->_internal_set_entity(from._internal_entity());
  }
  if (!from._internal_slotname().empty()) {
    _this->_internal_set_slotname(from._internal_slotname());
  }
  if (from._internal_rangestart() != 0) {
    _this->_internal_set_rangestart(from._internal_rangestart());
  }
  if (from._internal_rangeend() != 0) {
    _this->_internal_set_rangeend(from._internal_rangeend());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Slot::CopyFrom(const Slot& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rero.Slot)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Slot::IsInitialized() const {
  return true;
}

void Slot::InternalSwap(Slot* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.rawvalue_, lhs_arena,
                                       &other->_impl_.rawvalue_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.entity_, lhs_arena,
                                       &other->_impl_.entity_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.slotname_, lhs_arena,
                                       &other->_impl_.slotname_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Slot, _impl_.rangeend_)
      + sizeof(Slot::_impl_.rangeend_)
      - PROTOBUF_FIELD_OFFSET(Slot, _impl_.rangestart_)>(
          reinterpret_cast<char*>(&_impl_.rangestart_),
          reinterpret_cast<char*>(&other->_impl_.rangestart_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Slot::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_nlu_2eproto_getter, &descriptor_table_nlu_2eproto_once,
      file_level_metadata_nlu_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace rero
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::rero::NLURequest*
Arena::CreateMaybeMessage< ::rero::NLURequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rero::NLURequest >(arena);
}
template<> PROTOBUF_NOINLINE ::rero::Intent*
Arena::CreateMaybeMessage< ::rero::Intent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rero::Intent >(arena);
}
template<> PROTOBUF_NOINLINE ::rero::Slot*
Arena::CreateMaybeMessage< ::rero::Slot >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rero::Slot >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
