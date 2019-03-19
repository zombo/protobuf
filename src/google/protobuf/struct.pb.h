// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/struct.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fstruct_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fstruct_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fstruct_2eproto PROTOBUF_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2fstruct_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
void PROTOBUF_EXPORT AddDescriptors_google_2fprotobuf_2fstruct_2eproto();
PROTOBUF_NAMESPACE_OPEN
class ListValue;
class ListValueDefaultTypeInternal;
PROTOBUF_EXPORT extern ListValueDefaultTypeInternal _ListValue_default_instance_;
class Struct;
class StructDefaultTypeInternal;
PROTOBUF_EXPORT extern StructDefaultTypeInternal _Struct_default_instance_;
class Struct_FieldsEntry_DoNotUse;
class Struct_FieldsEntry_DoNotUseDefaultTypeInternal;
PROTOBUF_EXPORT extern Struct_FieldsEntry_DoNotUseDefaultTypeInternal _Struct_FieldsEntry_DoNotUse_default_instance_;
class Value;
class ValueDefaultTypeInternal;
PROTOBUF_EXPORT extern ValueDefaultTypeInternal _Value_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::ListValue* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::ListValue>(Arena*);
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::Struct* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Struct>(Arena*);
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::Struct_FieldsEntry_DoNotUse* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Struct_FieldsEntry_DoNotUse>(Arena*);
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::Value* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Value>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

enum NullValue {
  NULL_VALUE = 0,
  NullValue_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  NullValue_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
PROTOBUF_EXPORT bool NullValue_IsValid(int value);
constexpr NullValue NullValue_MIN = NULL_VALUE;
constexpr NullValue NullValue_MAX = NULL_VALUE;
constexpr int NullValue_ARRAYSIZE = NullValue_MAX + 1;

PROTOBUF_EXPORT const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* NullValue_descriptor();
inline const std::string& NullValue_Name(NullValue value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    NullValue_descriptor(), value);
}
inline bool NullValue_Parse(
    const std::string& name, NullValue* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<NullValue>(
    NullValue_descriptor(), name, value);
}
// ===================================================================

class Struct_FieldsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Struct_FieldsEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Value,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Struct_FieldsEntry_DoNotUse, 
    std::string, PROTOBUF_NAMESPACE_ID::Value,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
    0 > SuperType;
  Struct_FieldsEntry_DoNotUse();
  Struct_FieldsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const Struct_FieldsEntry_DoNotUse& other);
  static const Struct_FieldsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Struct_FieldsEntry_DoNotUse*>(&_Struct_FieldsEntry_DoNotUse_default_instance_); }
  bool ValidateKey() const {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(key().data(), key().size(), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "google.protobuf.Struct.FieldsEntry.key");
 }
  bool ValidateValue() const { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class PROTOBUF_EXPORT Struct final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Struct) */ {
 public:
  Struct();
  virtual ~Struct();

  Struct(const Struct& from);
  Struct(Struct&& from) noexcept
    : Struct() {
    *this = ::std::move(from);
  }

  inline Struct& operator=(const Struct& from) {
    CopyFrom(from);
    return *this;
  }
  inline Struct& operator=(Struct&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Struct& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Struct* internal_default_instance() {
    return reinterpret_cast<const Struct*>(
               &_Struct_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(Struct* other);
  void Swap(Struct* other);
  friend void swap(Struct& a, Struct& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Struct* New() const final {
    return CreateMaybeMessage<Struct>(nullptr);
  }

  Struct* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Struct>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Struct& from);
  void MergeFrom(const Struct& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Struct* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Struct";
  }
  protected:
  explicit Struct(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .google.protobuf.Value> fields = 1;
  int fields_size() const;
  void clear_fields();
  static const int kFieldsFieldNumber = 1;
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Value >&
      fields() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Value >*
      mutable_fields();

  // @@protoc_insertion_point(class_scope:google.protobuf.Struct)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      Struct_FieldsEntry_DoNotUse,
      std::string, PROTOBUF_NAMESPACE_ID::Value,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE,
      0 > fields_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2fstruct_2eproto;
};
// -------------------------------------------------------------------

class PROTOBUF_EXPORT Value final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Value) */ {
 public:
  Value();
  virtual ~Value();

  Value(const Value& from);
  Value(Value&& from) noexcept
    : Value() {
    *this = ::std::move(from);
  }

  inline Value& operator=(const Value& from) {
    CopyFrom(from);
    return *this;
  }
  inline Value& operator=(Value&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Value& default_instance();

  enum KindCase {
    kNullValue = 1,
    kNumberValue = 2,
    kStringValue = 3,
    kBoolValue = 4,
    kStructValue = 5,
    kListValue = 6,
    KIND_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Value* internal_default_instance() {
    return reinterpret_cast<const Value*>(
               &_Value_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(Value* other);
  void Swap(Value* other);
  friend void swap(Value& a, Value& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Value* New() const final {
    return CreateMaybeMessage<Value>(nullptr);
  }

  Value* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Value>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Value& from);
  void MergeFrom(const Value& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Value* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.Value";
  }
  protected:
  explicit Value(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .google.protobuf.NullValue null_value = 1;
  private:
  bool has_null_value() const;
  public:
  void clear_null_value();
  static const int kNullValueFieldNumber = 1;
  PROTOBUF_NAMESPACE_ID::NullValue null_value() const;
  void set_null_value(PROTOBUF_NAMESPACE_ID::NullValue value);

  // double number_value = 2;
  private:
  bool has_number_value() const;
  public:
  void clear_number_value();
  static const int kNumberValueFieldNumber = 2;
  double number_value() const;
  void set_number_value(double value);

  // string string_value = 3;
  private:
  bool has_string_value() const;
  public:
  void clear_string_value();
  static const int kStringValueFieldNumber = 3;
  const std::string& string_value() const;
  void set_string_value(const std::string& value);
  void set_string_value(std::string&& value);
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  std::string* mutable_string_value();
  std::string* release_string_value();
  void set_allocated_string_value(std::string* string_value);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_string_value();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_string_value(
      std::string* string_value);

  // bool bool_value = 4;
  private:
  bool has_bool_value() const;
  public:
  void clear_bool_value();
  static const int kBoolValueFieldNumber = 4;
  bool bool_value() const;
  void set_bool_value(bool value);

  // .google.protobuf.Struct struct_value = 5;
  bool has_struct_value() const;
  void clear_struct_value();
  static const int kStructValueFieldNumber = 5;
  const PROTOBUF_NAMESPACE_ID::Struct& struct_value() const;
  PROTOBUF_NAMESPACE_ID::Struct* release_struct_value();
  PROTOBUF_NAMESPACE_ID::Struct* mutable_struct_value();
  void set_allocated_struct_value(PROTOBUF_NAMESPACE_ID::Struct* struct_value);
  void unsafe_arena_set_allocated_struct_value(
      PROTOBUF_NAMESPACE_ID::Struct* struct_value);
  PROTOBUF_NAMESPACE_ID::Struct* unsafe_arena_release_struct_value();

  // .google.protobuf.ListValue list_value = 6;
  bool has_list_value() const;
  void clear_list_value();
  static const int kListValueFieldNumber = 6;
  const PROTOBUF_NAMESPACE_ID::ListValue& list_value() const;
  PROTOBUF_NAMESPACE_ID::ListValue* release_list_value();
  PROTOBUF_NAMESPACE_ID::ListValue* mutable_list_value();
  void set_allocated_list_value(PROTOBUF_NAMESPACE_ID::ListValue* list_value);
  void unsafe_arena_set_allocated_list_value(
      PROTOBUF_NAMESPACE_ID::ListValue* list_value);
  PROTOBUF_NAMESPACE_ID::ListValue* unsafe_arena_release_list_value();

  void clear_kind();
  KindCase kind_case() const;
  // @@protoc_insertion_point(class_scope:google.protobuf.Value)
 private:
  class HasBitSetters;
  void set_has_null_value();
  void set_has_number_value();
  void set_has_string_value();
  void set_has_bool_value();
  void set_has_struct_value();
  void set_has_list_value();

  inline bool has_kind() const;
  inline void clear_has_kind();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  union KindUnion {
    KindUnion() {}
    int null_value_;
    double number_value_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr string_value_;
    bool bool_value_;
    PROTOBUF_NAMESPACE_ID::Struct* struct_value_;
    PROTOBUF_NAMESPACE_ID::ListValue* list_value_;
  } kind_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2fprotobuf_2fstruct_2eproto;
};
// -------------------------------------------------------------------

class PROTOBUF_EXPORT ListValue final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.ListValue) */ {
 public:
  ListValue();
  virtual ~ListValue();

  ListValue(const ListValue& from);
  ListValue(ListValue&& from) noexcept
    : ListValue() {
    *this = ::std::move(from);
  }

  inline ListValue& operator=(const ListValue& from) {
    CopyFrom(from);
    return *this;
  }
  inline ListValue& operator=(ListValue&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ListValue& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ListValue* internal_default_instance() {
    return reinterpret_cast<const ListValue*>(
               &_ListValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void UnsafeArenaSwap(ListValue* other);
  void Swap(ListValue* other);
  friend void swap(ListValue& a, ListValue& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ListValue* New() const final {
    return CreateMaybeMessage<ListValue>(nullptr);
  }

  ListValue* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ListValue>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ListValue& from);
  void MergeFrom(const ListValue& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ListValue* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.ListValue";
  }
  protected:
  explicit ListValue(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.protobuf.Value values = 1;
  int values_size() const;
  void clear_values();
  static const int kValuesFieldNumber = 1;
  PROTOBUF_NAMESPACE_ID::Value* mutable_values(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Value >*
      mutable_values();
  const PROTOBUF_NAMESPACE_ID::Value& values(int index) const;
  PROTOBUF_NAMESPACE_ID::Value* add_values();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Value >&
      values() const;

  // @@protoc_insertion_point(class_scope:google.protobuf.ListValue)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Value > values_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2fstruct_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Struct

// map<string, .google.protobuf.Value> fields = 1;
inline int Struct::fields_size() const {
  return fields_.size();
}
inline void Struct::clear_fields() {
  fields_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Value >&
Struct::fields() const {
  // @@protoc_insertion_point(field_map:google.protobuf.Struct.fields)
  return fields_.GetMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, PROTOBUF_NAMESPACE_ID::Value >*
Struct::mutable_fields() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.Struct.fields)
  return fields_.MutableMap();
}

// -------------------------------------------------------------------

// Value

// .google.protobuf.NullValue null_value = 1;
inline bool Value::has_null_value() const {
  return kind_case() == kNullValue;
}
inline void Value::set_has_null_value() {
  _oneof_case_[0] = kNullValue;
}
inline void Value::clear_null_value() {
  if (has_null_value()) {
    kind_.null_value_ = 0;
    clear_has_kind();
  }
}
inline PROTOBUF_NAMESPACE_ID::NullValue Value::null_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.null_value)
  if (has_null_value()) {
    return static_cast< PROTOBUF_NAMESPACE_ID::NullValue >(kind_.null_value_);
  }
  return static_cast< PROTOBUF_NAMESPACE_ID::NullValue >(0);
}
inline void Value::set_null_value(PROTOBUF_NAMESPACE_ID::NullValue value) {
  if (!has_null_value()) {
    clear_kind();
    set_has_null_value();
  }
  kind_.null_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.null_value)
}

// double number_value = 2;
inline bool Value::has_number_value() const {
  return kind_case() == kNumberValue;
}
inline void Value::set_has_number_value() {
  _oneof_case_[0] = kNumberValue;
}
inline void Value::clear_number_value() {
  if (has_number_value()) {
    kind_.number_value_ = 0;
    clear_has_kind();
  }
}
inline double Value::number_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.number_value)
  if (has_number_value()) {
    return kind_.number_value_;
  }
  return 0;
}
inline void Value::set_number_value(double value) {
  if (!has_number_value()) {
    clear_kind();
    set_has_number_value();
  }
  kind_.number_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.number_value)
}

// string string_value = 3;
inline bool Value::has_string_value() const {
  return kind_case() == kStringValue;
}
inline void Value::set_has_string_value() {
  _oneof_case_[0] = kStringValue;
}
inline void Value::clear_string_value() {
  if (has_string_value()) {
    kind_.string_value_.Destroy(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
    clear_has_kind();
  }
}
inline const std::string& Value::string_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.string_value)
  if (has_string_value()) {
    return kind_.string_value_.Get();
  }
  return *&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Value::set_string_value(const std::string& value) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
}
inline void Value::set_string_value(std::string&& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.Value.string_value)
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Value.string_value)
}
inline void Value::set_string_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:google.protobuf.Value.string_value)
}
inline void Value::set_string_value(const char* value,
                             size_t size) {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  kind_.string_value_.Set(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Value.string_value)
}
inline std::string* Value::mutable_string_value() {
  if (!has_string_value()) {
    clear_kind();
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  return kind_.string_value_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.string_value)
}
inline std::string* Value::release_string_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.string_value)
  if (has_string_value()) {
    clear_has_kind();
    return kind_.string_value_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
        GetArenaNoVirtual());
  } else {
    return nullptr;
  }
}
inline void Value::set_allocated_string_value(std::string* string_value) {
  if (has_kind()) {
    clear_kind();
  }
  if (string_value != nullptr) {
    set_has_string_value();
    kind_.string_value_.UnsafeSetDefault(string_value);
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Value.string_value)
}
inline std::string* Value::unsafe_arena_release_string_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.string_value)
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (has_string_value()) {
    clear_has_kind();
    return kind_.string_value_.UnsafeArenaRelease(
        &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  } else {
    return nullptr;
  }
}
inline void Value::unsafe_arena_set_allocated_string_value(std::string* string_value) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != nullptr);
  if (!has_string_value()) {
    kind_.string_value_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }
  clear_kind();
  if (string_value) {
    set_has_string_value();
    kind_.string_value_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), string_value, GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.string_value)
}

// bool bool_value = 4;
inline bool Value::has_bool_value() const {
  return kind_case() == kBoolValue;
}
inline void Value::set_has_bool_value() {
  _oneof_case_[0] = kBoolValue;
}
inline void Value::clear_bool_value() {
  if (has_bool_value()) {
    kind_.bool_value_ = false;
    clear_has_kind();
  }
}
inline bool Value::bool_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.bool_value)
  if (has_bool_value()) {
    return kind_.bool_value_;
  }
  return false;
}
inline void Value::set_bool_value(bool value) {
  if (!has_bool_value()) {
    clear_kind();
    set_has_bool_value();
  }
  kind_.bool_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.Value.bool_value)
}

// .google.protobuf.Struct struct_value = 5;
inline bool Value::has_struct_value() const {
  return kind_case() == kStructValue;
}
inline void Value::set_has_struct_value() {
  _oneof_case_[0] = kStructValue;
}
inline void Value::clear_struct_value() {
  if (has_struct_value()) {
    if (GetArenaNoVirtual() == nullptr) {
      delete kind_.struct_value_;
    }
    clear_has_kind();
  }
}
inline PROTOBUF_NAMESPACE_ID::Struct* Value::release_struct_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.struct_value)
  if (has_struct_value()) {
    clear_has_kind();
      PROTOBUF_NAMESPACE_ID::Struct* temp = kind_.struct_value_;
    if (GetArenaNoVirtual() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    kind_.struct_value_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const PROTOBUF_NAMESPACE_ID::Struct& Value::struct_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.struct_value)
  return has_struct_value()
      ? *kind_.struct_value_
      : *reinterpret_cast< PROTOBUF_NAMESPACE_ID::Struct*>(&PROTOBUF_NAMESPACE_ID::_Struct_default_instance_);
}
inline PROTOBUF_NAMESPACE_ID::Struct* Value::unsafe_arena_release_struct_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.struct_value)
  if (has_struct_value()) {
    clear_has_kind();
    PROTOBUF_NAMESPACE_ID::Struct* temp = kind_.struct_value_;
    kind_.struct_value_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Value::unsafe_arena_set_allocated_struct_value(PROTOBUF_NAMESPACE_ID::Struct* struct_value) {
  clear_kind();
  if (struct_value) {
    set_has_struct_value();
    kind_.struct_value_ = struct_value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.struct_value)
}
inline PROTOBUF_NAMESPACE_ID::Struct* Value::mutable_struct_value() {
  if (!has_struct_value()) {
    clear_kind();
    set_has_struct_value();
    kind_.struct_value_ = CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::Struct >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.struct_value)
  return kind_.struct_value_;
}

// .google.protobuf.ListValue list_value = 6;
inline bool Value::has_list_value() const {
  return kind_case() == kListValue;
}
inline void Value::set_has_list_value() {
  _oneof_case_[0] = kListValue;
}
inline void Value::clear_list_value() {
  if (has_list_value()) {
    if (GetArenaNoVirtual() == nullptr) {
      delete kind_.list_value_;
    }
    clear_has_kind();
  }
}
inline PROTOBUF_NAMESPACE_ID::ListValue* Value::release_list_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Value.list_value)
  if (has_list_value()) {
    clear_has_kind();
      PROTOBUF_NAMESPACE_ID::ListValue* temp = kind_.list_value_;
    if (GetArenaNoVirtual() != nullptr) {
      temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
    }
    kind_.list_value_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const PROTOBUF_NAMESPACE_ID::ListValue& Value::list_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Value.list_value)
  return has_list_value()
      ? *kind_.list_value_
      : *reinterpret_cast< PROTOBUF_NAMESPACE_ID::ListValue*>(&PROTOBUF_NAMESPACE_ID::_ListValue_default_instance_);
}
inline PROTOBUF_NAMESPACE_ID::ListValue* Value::unsafe_arena_release_list_value() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.protobuf.Value.list_value)
  if (has_list_value()) {
    clear_has_kind();
    PROTOBUF_NAMESPACE_ID::ListValue* temp = kind_.list_value_;
    kind_.list_value_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Value::unsafe_arena_set_allocated_list_value(PROTOBUF_NAMESPACE_ID::ListValue* list_value) {
  clear_kind();
  if (list_value) {
    set_has_list_value();
    kind_.list_value_ = list_value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.protobuf.Value.list_value)
}
inline PROTOBUF_NAMESPACE_ID::ListValue* Value::mutable_list_value() {
  if (!has_list_value()) {
    clear_kind();
    set_has_list_value();
    kind_.list_value_ = CreateMaybeMessage< PROTOBUF_NAMESPACE_ID::ListValue >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.Value.list_value)
  return kind_.list_value_;
}

inline bool Value::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void Value::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
inline Value::KindCase Value::kind_case() const {
  return Value::KindCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ListValue

// repeated .google.protobuf.Value values = 1;
inline int ListValue::values_size() const {
  return values_.size();
}
inline void ListValue::clear_values() {
  values_.Clear();
}
inline PROTOBUF_NAMESPACE_ID::Value* ListValue::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.ListValue.values)
  return values_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Value >*
ListValue::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.ListValue.values)
  return &values_;
}
inline const PROTOBUF_NAMESPACE_ID::Value& ListValue::values(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.ListValue.values)
  return values_.Get(index);
}
inline PROTOBUF_NAMESPACE_ID::Value* ListValue::add_values() {
  // @@protoc_insertion_point(field_add:google.protobuf.ListValue.values)
  return values_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< PROTOBUF_NAMESPACE_ID::Value >&
ListValue::values() const {
  // @@protoc_insertion_point(field_list:google.protobuf.ListValue.values)
  return values_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< PROTOBUF_NAMESPACE_ID::NullValue> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< PROTOBUF_NAMESPACE_ID::NullValue>() {
  return PROTOBUF_NAMESPACE_ID::NullValue_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fstruct_2eproto
