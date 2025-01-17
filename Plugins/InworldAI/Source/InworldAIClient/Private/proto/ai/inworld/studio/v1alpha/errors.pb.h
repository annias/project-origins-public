// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: errors.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_errors_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_errors_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_errors_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_errors_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_errors_2eproto;
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {
class BadRequest;
class BadRequestDefaultTypeInternal;
extern BadRequestDefaultTypeInternal _BadRequest_default_instance_;
class BadRequest_FieldViolation;
class BadRequest_FieldViolationDefaultTypeInternal;
extern BadRequest_FieldViolationDefaultTypeInternal _BadRequest_FieldViolation_default_instance_;
class BadRequest_FieldViolation_MetadataEntry_DoNotUse;
class BadRequest_FieldViolation_MetadataEntry_DoNotUseDefaultTypeInternal;
extern BadRequest_FieldViolation_MetadataEntry_DoNotUseDefaultTypeInternal _BadRequest_FieldViolation_MetadataEntry_DoNotUse_default_instance_;
}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai
PROTOBUF_NAMESPACE_OPEN
template<> ::ai::inworld::studio::v1alpha::BadRequest* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::BadRequest>(Arena*);
template<> ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::BadRequest_FieldViolation>(Arena*);
template<> ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation_MetadataEntry_DoNotUse* Arena::CreateMaybeMessage<::ai::inworld::studio::v1alpha::BadRequest_FieldViolation_MetadataEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ai {
namespace inworld {
namespace studio {
namespace v1alpha {

// ===================================================================

class BadRequest_FieldViolation_MetadataEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<BadRequest_FieldViolation_MetadataEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<BadRequest_FieldViolation_MetadataEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  BadRequest_FieldViolation_MetadataEntry_DoNotUse();
  explicit BadRequest_FieldViolation_MetadataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const BadRequest_FieldViolation_MetadataEntry_DoNotUse& other);
  static const BadRequest_FieldViolation_MetadataEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const BadRequest_FieldViolation_MetadataEntry_DoNotUse*>(&_BadRequest_FieldViolation_MetadataEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "ai.inworld.studio.v1alpha.BadRequest.FieldViolation.MetadataEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "ai.inworld.studio.v1alpha.BadRequest.FieldViolation.MetadataEntry.value");
 }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_errors_2eproto);
    return ::descriptor_table_errors_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class BadRequest_FieldViolation PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.BadRequest.FieldViolation) */ {
 public:
  inline BadRequest_FieldViolation() : BadRequest_FieldViolation(nullptr) {}
  virtual ~BadRequest_FieldViolation();

  BadRequest_FieldViolation(const BadRequest_FieldViolation& from);
  BadRequest_FieldViolation(BadRequest_FieldViolation&& from) noexcept
    : BadRequest_FieldViolation() {
    *this = ::std::move(from);
  }

  inline BadRequest_FieldViolation& operator=(const BadRequest_FieldViolation& from) {
    CopyFrom(from);
    return *this;
  }
  inline BadRequest_FieldViolation& operator=(BadRequest_FieldViolation&& from) noexcept {
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
  static const BadRequest_FieldViolation& default_instance();

  static inline const BadRequest_FieldViolation* internal_default_instance() {
    return reinterpret_cast<const BadRequest_FieldViolation*>(
               &_BadRequest_FieldViolation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BadRequest_FieldViolation& a, BadRequest_FieldViolation& b) {
    a.Swap(&b);
  }
  inline void Swap(BadRequest_FieldViolation* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BadRequest_FieldViolation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BadRequest_FieldViolation* New() const final {
    return CreateMaybeMessage<BadRequest_FieldViolation>(nullptr);
  }

  BadRequest_FieldViolation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BadRequest_FieldViolation>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BadRequest_FieldViolation& from);
  void MergeFrom(const BadRequest_FieldViolation& from);
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
  void InternalSwap(BadRequest_FieldViolation* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.BadRequest.FieldViolation";
  }
  protected:
  explicit BadRequest_FieldViolation(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_errors_2eproto);
    return ::descriptor_table_errors_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kMetadataFieldNumber = 3,
    kFieldFieldNumber = 1,
    kDescriptionFieldNumber = 2,
  };
  // map<string, string> metadata = 3;
  int metadata_size() const;
  private:
  int _internal_metadata_size() const;
  public:
  void clear_metadata();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_metadata() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_metadata();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      metadata() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_metadata();

  // string field = 1;
  void clear_field();
  const std::string& field() const;
  void set_field(const std::string& value);
  void set_field(std::string&& value);
  void set_field(const char* value);
  void set_field(const char* value, size_t size);
  std::string* mutable_field();
  std::string* release_field();
  void set_allocated_field(std::string* field);
  private:
  const std::string& _internal_field() const;
  void _internal_set_field(const std::string& value);
  std::string* _internal_mutable_field();
  public:

  // string description = 2;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.BadRequest.FieldViolation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      BadRequest_FieldViolation_MetadataEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr field_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_errors_2eproto;
};
// -------------------------------------------------------------------

class BadRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ai.inworld.studio.v1alpha.BadRequest) */ {
 public:
  inline BadRequest() : BadRequest(nullptr) {}
  virtual ~BadRequest();

  BadRequest(const BadRequest& from);
  BadRequest(BadRequest&& from) noexcept
    : BadRequest() {
    *this = ::std::move(from);
  }

  inline BadRequest& operator=(const BadRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline BadRequest& operator=(BadRequest&& from) noexcept {
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
  static const BadRequest& default_instance();

  static inline const BadRequest* internal_default_instance() {
    return reinterpret_cast<const BadRequest*>(
               &_BadRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(BadRequest& a, BadRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(BadRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BadRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BadRequest* New() const final {
    return CreateMaybeMessage<BadRequest>(nullptr);
  }

  BadRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BadRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BadRequest& from);
  void MergeFrom(const BadRequest& from);
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
  void InternalSwap(BadRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ai.inworld.studio.v1alpha.BadRequest";
  }
  protected:
  explicit BadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_errors_2eproto);
    return ::descriptor_table_errors_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef BadRequest_FieldViolation FieldViolation;

  // accessors -------------------------------------------------------

  enum : int {
    kFieldViolationsFieldNumber = 1,
  };
  // repeated .ai.inworld.studio.v1alpha.BadRequest.FieldViolation field_violations = 1;
  int field_violations_size() const;
  private:
  int _internal_field_violations_size() const;
  public:
  void clear_field_violations();
  ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* mutable_field_violations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation >*
      mutable_field_violations();
  private:
  const ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation& _internal_field_violations(int index) const;
  ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* _internal_add_field_violations();
  public:
  const ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation& field_violations(int index) const;
  ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* add_field_violations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation >&
      field_violations() const;

  // @@protoc_insertion_point(class_scope:ai.inworld.studio.v1alpha.BadRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation > field_violations_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_errors_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// BadRequest_FieldViolation

// string field = 1;
inline void BadRequest_FieldViolation::clear_field() {
  field_.ClearToEmpty();
}
inline const std::string& BadRequest_FieldViolation::field() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
  return _internal_field();
}
inline void BadRequest_FieldViolation::set_field(const std::string& value) {
  _internal_set_field(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
}
inline std::string* BadRequest_FieldViolation::mutable_field() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
  return _internal_mutable_field();
}
inline const std::string& BadRequest_FieldViolation::_internal_field() const {
  return field_.Get();
}
inline void BadRequest_FieldViolation::_internal_set_field(const std::string& value) {
  
  field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void BadRequest_FieldViolation::set_field(std::string&& value) {
  
  field_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
}
inline void BadRequest_FieldViolation::set_field(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
}
inline void BadRequest_FieldViolation::set_field(const char* value,
    size_t size) {
  
  field_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
}
inline std::string* BadRequest_FieldViolation::_internal_mutable_field() {
  
  return field_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* BadRequest_FieldViolation::release_field() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
  return field_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void BadRequest_FieldViolation::set_allocated_field(std::string* field) {
  if (field != nullptr) {
    
  } else {
    
  }
  field_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), field,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.field)
}

// string description = 2;
inline void BadRequest_FieldViolation::clear_description() {
  description_.ClearToEmpty();
}
inline const std::string& BadRequest_FieldViolation::description() const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
  return _internal_description();
}
inline void BadRequest_FieldViolation::set_description(const std::string& value) {
  _internal_set_description(value);
  // @@protoc_insertion_point(field_set:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
}
inline std::string* BadRequest_FieldViolation::mutable_description() {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
  return _internal_mutable_description();
}
inline const std::string& BadRequest_FieldViolation::_internal_description() const {
  return description_.Get();
}
inline void BadRequest_FieldViolation::_internal_set_description(const std::string& value) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void BadRequest_FieldViolation::set_description(std::string&& value) {
  
  description_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
}
inline void BadRequest_FieldViolation::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
}
inline void BadRequest_FieldViolation::set_description(const char* value,
    size_t size) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
}
inline std::string* BadRequest_FieldViolation::_internal_mutable_description() {
  
  return description_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* BadRequest_FieldViolation::release_description() {
  // @@protoc_insertion_point(field_release:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
  return description_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void BadRequest_FieldViolation::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.description)
}

// map<string, string> metadata = 3;
inline int BadRequest_FieldViolation::_internal_metadata_size() const {
  return metadata_.size();
}
inline int BadRequest_FieldViolation::metadata_size() const {
  return _internal_metadata_size();
}
inline void BadRequest_FieldViolation::clear_metadata() {
  metadata_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
BadRequest_FieldViolation::_internal_metadata() const {
  return metadata_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
BadRequest_FieldViolation::metadata() const {
  // @@protoc_insertion_point(field_map:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.metadata)
  return _internal_metadata();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
BadRequest_FieldViolation::_internal_mutable_metadata() {
  return metadata_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
BadRequest_FieldViolation::mutable_metadata() {
  // @@protoc_insertion_point(field_mutable_map:ai.inworld.studio.v1alpha.BadRequest.FieldViolation.metadata)
  return _internal_mutable_metadata();
}

// -------------------------------------------------------------------

// BadRequest

// repeated .ai.inworld.studio.v1alpha.BadRequest.FieldViolation field_violations = 1;
inline int BadRequest::_internal_field_violations_size() const {
  return field_violations_.size();
}
inline int BadRequest::field_violations_size() const {
  return _internal_field_violations_size();
}
inline void BadRequest::clear_field_violations() {
  field_violations_.Clear();
}
inline ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* BadRequest::mutable_field_violations(int index) {
  // @@protoc_insertion_point(field_mutable:ai.inworld.studio.v1alpha.BadRequest.field_violations)
  return field_violations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation >*
BadRequest::mutable_field_violations() {
  // @@protoc_insertion_point(field_mutable_list:ai.inworld.studio.v1alpha.BadRequest.field_violations)
  return &field_violations_;
}
inline const ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation& BadRequest::_internal_field_violations(int index) const {
  return field_violations_.Get(index);
}
inline const ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation& BadRequest::field_violations(int index) const {
  // @@protoc_insertion_point(field_get:ai.inworld.studio.v1alpha.BadRequest.field_violations)
  return _internal_field_violations(index);
}
inline ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* BadRequest::_internal_add_field_violations() {
  return field_violations_.Add();
}
inline ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation* BadRequest::add_field_violations() {
  // @@protoc_insertion_point(field_add:ai.inworld.studio.v1alpha.BadRequest.field_violations)
  return _internal_add_field_violations();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ai::inworld::studio::v1alpha::BadRequest_FieldViolation >&
BadRequest::field_violations() const {
  // @@protoc_insertion_point(field_list:ai.inworld.studio.v1alpha.BadRequest.field_violations)
  return field_violations_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha
}  // namespace studio
}  // namespace inworld
}  // namespace ai

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_errors_2eproto
