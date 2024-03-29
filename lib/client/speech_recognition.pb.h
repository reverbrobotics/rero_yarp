// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: speech_recognition.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_speech_5frecognition_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_speech_5frecognition_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "audio.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_speech_5frecognition_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_speech_5frecognition_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_speech_5frecognition_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_speech_5frecognition_2eproto_metadata_getter(int index);
namespace rero {
class SpeechRecognitionResult;
struct SpeechRecognitionResultDefaultTypeInternal;
extern SpeechRecognitionResultDefaultTypeInternal _SpeechRecognitionResult_default_instance_;
class Vocab;
struct VocabDefaultTypeInternal;
extern VocabDefaultTypeInternal _Vocab_default_instance_;
class VocabResult;
struct VocabResultDefaultTypeInternal;
extern VocabResultDefaultTypeInternal _VocabResult_default_instance_;
}  // namespace rero
PROTOBUF_NAMESPACE_OPEN
template<> ::rero::SpeechRecognitionResult* Arena::CreateMaybeMessage<::rero::SpeechRecognitionResult>(Arena*);
template<> ::rero::Vocab* Arena::CreateMaybeMessage<::rero::Vocab>(Arena*);
template<> ::rero::VocabResult* Arena::CreateMaybeMessage<::rero::VocabResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace rero {

// ===================================================================

class SpeechRecognitionResult PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rero.SpeechRecognitionResult) */ {
 public:
  inline SpeechRecognitionResult() : SpeechRecognitionResult(nullptr) {}
  virtual ~SpeechRecognitionResult();
  explicit constexpr SpeechRecognitionResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SpeechRecognitionResult(const SpeechRecognitionResult& from);
  SpeechRecognitionResult(SpeechRecognitionResult&& from) noexcept
    : SpeechRecognitionResult() {
    *this = ::std::move(from);
  }

  inline SpeechRecognitionResult& operator=(const SpeechRecognitionResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline SpeechRecognitionResult& operator=(SpeechRecognitionResult&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SpeechRecognitionResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const SpeechRecognitionResult* internal_default_instance() {
    return reinterpret_cast<const SpeechRecognitionResult*>(
               &_SpeechRecognitionResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SpeechRecognitionResult& a, SpeechRecognitionResult& b) {
    a.Swap(&b);
  }
  inline void Swap(SpeechRecognitionResult* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SpeechRecognitionResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SpeechRecognitionResult* New() const final {
    return CreateMaybeMessage<SpeechRecognitionResult>(nullptr);
  }

  SpeechRecognitionResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SpeechRecognitionResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SpeechRecognitionResult& from);
  void MergeFrom(const SpeechRecognitionResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SpeechRecognitionResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rero.SpeechRecognitionResult";
  }
  protected:
  explicit SpeechRecognitionResult(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_speech_5frecognition_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  void set_result(const std::string& value);
  void set_result(std::string&& value);
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  std::string* mutable_result();
  std::string* release_result();
  void set_allocated_result(std::string* result);
  private:
  const std::string& _internal_result() const;
  void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:rero.SpeechRecognitionResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_speech_5frecognition_2eproto;
};
// -------------------------------------------------------------------

class VocabResult PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rero.VocabResult) */ {
 public:
  inline VocabResult() : VocabResult(nullptr) {}
  virtual ~VocabResult();
  explicit constexpr VocabResult(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VocabResult(const VocabResult& from);
  VocabResult(VocabResult&& from) noexcept
    : VocabResult() {
    *this = ::std::move(from);
  }

  inline VocabResult& operator=(const VocabResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline VocabResult& operator=(VocabResult&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const VocabResult& default_instance() {
    return *internal_default_instance();
  }
  static inline const VocabResult* internal_default_instance() {
    return reinterpret_cast<const VocabResult*>(
               &_VocabResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(VocabResult& a, VocabResult& b) {
    a.Swap(&b);
  }
  inline void Swap(VocabResult* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(VocabResult* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VocabResult* New() const final {
    return CreateMaybeMessage<VocabResult>(nullptr);
  }

  VocabResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VocabResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VocabResult& from);
  void MergeFrom(const VocabResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VocabResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rero.VocabResult";
  }
  protected:
  explicit VocabResult(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_speech_5frecognition_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // string result = 1;
  void clear_result();
  const std::string& result() const;
  void set_result(const std::string& value);
  void set_result(std::string&& value);
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  std::string* mutable_result();
  std::string* release_result();
  void set_allocated_result(std::string* result);
  private:
  const std::string& _internal_result() const;
  void _internal_set_result(const std::string& value);
  std::string* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:rero.VocabResult)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_speech_5frecognition_2eproto;
};
// -------------------------------------------------------------------

class Vocab PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:rero.Vocab) */ {
 public:
  inline Vocab() : Vocab(nullptr) {}
  virtual ~Vocab();
  explicit constexpr Vocab(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Vocab(const Vocab& from);
  Vocab(Vocab&& from) noexcept
    : Vocab() {
    *this = ::std::move(from);
  }

  inline Vocab& operator=(const Vocab& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vocab& operator=(Vocab&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Vocab& default_instance() {
    return *internal_default_instance();
  }
  static inline const Vocab* internal_default_instance() {
    return reinterpret_cast<const Vocab*>(
               &_Vocab_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Vocab& a, Vocab& b) {
    a.Swap(&b);
  }
  inline void Swap(Vocab* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vocab* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vocab* New() const final {
    return CreateMaybeMessage<Vocab>(nullptr);
  }

  Vocab* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vocab>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vocab& from);
  void MergeFrom(const Vocab& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vocab* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "rero.Vocab";
  }
  protected:
  explicit Vocab(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_speech_5frecognition_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVocabFieldNumber = 1,
  };
  // string vocab = 1;
  void clear_vocab();
  const std::string& vocab() const;
  void set_vocab(const std::string& value);
  void set_vocab(std::string&& value);
  void set_vocab(const char* value);
  void set_vocab(const char* value, size_t size);
  std::string* mutable_vocab();
  std::string* release_vocab();
  void set_allocated_vocab(std::string* vocab);
  private:
  const std::string& _internal_vocab() const;
  void _internal_set_vocab(const std::string& value);
  std::string* _internal_mutable_vocab();
  public:

  // @@protoc_insertion_point(class_scope:rero.Vocab)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr vocab_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_speech_5frecognition_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpeechRecognitionResult

// string result = 1;
inline void SpeechRecognitionResult::clear_result() {
  result_.ClearToEmpty();
}
inline const std::string& SpeechRecognitionResult::result() const {
  // @@protoc_insertion_point(field_get:rero.SpeechRecognitionResult.result)
  return _internal_result();
}
inline void SpeechRecognitionResult::set_result(const std::string& value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:rero.SpeechRecognitionResult.result)
}
inline std::string* SpeechRecognitionResult::mutable_result() {
  // @@protoc_insertion_point(field_mutable:rero.SpeechRecognitionResult.result)
  return _internal_mutable_result();
}
inline const std::string& SpeechRecognitionResult::_internal_result() const {
  return result_.Get();
}
inline void SpeechRecognitionResult::_internal_set_result(const std::string& value) {
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void SpeechRecognitionResult::set_result(std::string&& value) {
  
  result_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rero.SpeechRecognitionResult.result)
}
inline void SpeechRecognitionResult::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:rero.SpeechRecognitionResult.result)
}
inline void SpeechRecognitionResult::set_result(const char* value,
    size_t size) {
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rero.SpeechRecognitionResult.result)
}
inline std::string* SpeechRecognitionResult::_internal_mutable_result() {
  
  return result_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* SpeechRecognitionResult::release_result() {
  // @@protoc_insertion_point(field_release:rero.SpeechRecognitionResult.result)
  return result_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SpeechRecognitionResult::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), result,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rero.SpeechRecognitionResult.result)
}

// -------------------------------------------------------------------

// VocabResult

// string result = 1;
inline void VocabResult::clear_result() {
  result_.ClearToEmpty();
}
inline const std::string& VocabResult::result() const {
  // @@protoc_insertion_point(field_get:rero.VocabResult.result)
  return _internal_result();
}
inline void VocabResult::set_result(const std::string& value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:rero.VocabResult.result)
}
inline std::string* VocabResult::mutable_result() {
  // @@protoc_insertion_point(field_mutable:rero.VocabResult.result)
  return _internal_mutable_result();
}
inline const std::string& VocabResult::_internal_result() const {
  return result_.Get();
}
inline void VocabResult::_internal_set_result(const std::string& value) {
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void VocabResult::set_result(std::string&& value) {
  
  result_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rero.VocabResult.result)
}
inline void VocabResult::set_result(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:rero.VocabResult.result)
}
inline void VocabResult::set_result(const char* value,
    size_t size) {
  
  result_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rero.VocabResult.result)
}
inline std::string* VocabResult::_internal_mutable_result() {
  
  return result_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* VocabResult::release_result() {
  // @@protoc_insertion_point(field_release:rero.VocabResult.result)
  return result_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void VocabResult::set_allocated_result(std::string* result) {
  if (result != nullptr) {
    
  } else {
    
  }
  result_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), result,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rero.VocabResult.result)
}

// -------------------------------------------------------------------

// Vocab

// string vocab = 1;
inline void Vocab::clear_vocab() {
  vocab_.ClearToEmpty();
}
inline const std::string& Vocab::vocab() const {
  // @@protoc_insertion_point(field_get:rero.Vocab.vocab)
  return _internal_vocab();
}
inline void Vocab::set_vocab(const std::string& value) {
  _internal_set_vocab(value);
  // @@protoc_insertion_point(field_set:rero.Vocab.vocab)
}
inline std::string* Vocab::mutable_vocab() {
  // @@protoc_insertion_point(field_mutable:rero.Vocab.vocab)
  return _internal_mutable_vocab();
}
inline const std::string& Vocab::_internal_vocab() const {
  return vocab_.Get();
}
inline void Vocab::_internal_set_vocab(const std::string& value) {
  
  vocab_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Vocab::set_vocab(std::string&& value) {
  
  vocab_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:rero.Vocab.vocab)
}
inline void Vocab::set_vocab(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  vocab_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:rero.Vocab.vocab)
}
inline void Vocab::set_vocab(const char* value,
    size_t size) {
  
  vocab_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:rero.Vocab.vocab)
}
inline std::string* Vocab::_internal_mutable_vocab() {
  
  return vocab_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Vocab::release_vocab() {
  // @@protoc_insertion_point(field_release:rero.Vocab.vocab)
  return vocab_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Vocab::set_allocated_vocab(std::string* vocab) {
  if (vocab != nullptr) {
    
  } else {
    
  }
  vocab_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), vocab,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:rero.Vocab.vocab)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace rero

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_speech_5frecognition_2eproto
