// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "search.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace examples {

namespace {

const ::google::protobuf::Descriptor* SearchRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* SearchResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_search_2eproto() {
  protobuf_AddDesc_search_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "search.proto");
  GOOGLE_CHECK(file != NULL);
  SearchRequest_descriptor_ = file->message_type(0);
  static const int SearchRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, query_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, page_number_),
  };
  SearchRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SearchRequest_descriptor_,
      SearchRequest::default_instance_,
      SearchRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SearchRequest));
  SearchResponse_descriptor_ = file->message_type(1);
  static const int SearchResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, results_),
  };
  SearchResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SearchResponse_descriptor_,
      SearchResponse::default_instance_,
      SearchResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SearchResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_search_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchRequest_descriptor_, &SearchRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SearchResponse_descriptor_, &SearchResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_search_2eproto() {
  delete SearchRequest::default_instance_;
  delete SearchRequest_reflection_;
  delete SearchResponse::default_instance_;
  delete SearchResponse_reflection_;
}

void protobuf_AddDesc_search_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014search.proto\022\010examples\"6\n\rSearchReques"
    "t\022\r\n\005query\030\001 \002(\t\022\026\n\013page_number\030\002 \001(\005:\0011"
    "\"!\n\016SearchResponse\022\017\n\007results\030\001 \003(\t2L\n\rS"
    "earchService\022;\n\006Search\022\027.examples.Search"
    "Request\032\030.examples.SearchResponse", 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "search.proto", &protobuf_RegisterTypes);
  SearchRequest::default_instance_ = new SearchRequest();
  SearchResponse::default_instance_ = new SearchResponse();
  SearchRequest::default_instance_->InitAsDefaultInstance();
  SearchResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_search_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_search_2eproto {
  StaticDescriptorInitializer_search_2eproto() {
    protobuf_AddDesc_search_2eproto();
  }
} static_descriptor_initializer_search_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SearchRequest::kQueryFieldNumber;
const int SearchRequest::kPageNumberFieldNumber;
#endif  // !_MSC_VER

SearchRequest::SearchRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SearchRequest::InitAsDefaultInstance() {
}

SearchRequest::SearchRequest(const SearchRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SearchRequest::SharedCtor() {
  _cached_size_ = 0;
  query_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  page_number_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchRequest::~SearchRequest() {
  SharedDtor();
}

void SearchRequest::SharedDtor() {
  if (query_ != &::google::protobuf::internal::kEmptyString) {
    delete query_;
  }
  if (this != default_instance_) {
  }
}

void SearchRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchRequest_descriptor_;
}

const SearchRequest& SearchRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_search_2eproto();
  return *default_instance_;
}

SearchRequest* SearchRequest::default_instance_ = NULL;

SearchRequest* SearchRequest::New() const {
  return new SearchRequest;
}

void SearchRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_query()) {
      if (query_ != &::google::protobuf::internal::kEmptyString) {
        query_->clear();
      }
    }
    page_number_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SearchRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string query = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_query()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->query().data(), this->query().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_page_number;
        break;
      }

      // optional int32 page_number = 2 [default = 1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_page_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &page_number_)));
          set_has_page_number();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SearchRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string query = 1;
  if (has_query()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->query(), output);
  }

  // optional int32 page_number = 2 [default = 1];
  if (has_page_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->page_number(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SearchRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string query = 1;
  if (has_query()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query(), target);
  }

  // optional int32 page_number = 2 [default = 1];
  if (has_page_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->page_number(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SearchRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string query = 1;
    if (has_query()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->query());
    }

    // optional int32 page_number = 2 [default = 1];
    if (has_page_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->page_number());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SearchRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SearchRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SearchRequest::MergeFrom(const SearchRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_query()) {
      set_query(from.query());
    }
    if (from.has_page_number()) {
      set_page_number(from.page_number());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SearchRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchRequest::CopyFrom(const SearchRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void SearchRequest::Swap(SearchRequest* other) {
  if (other != this) {
    std::swap(query_, other->query_);
    std::swap(page_number_, other->page_number_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SearchRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchRequest_descriptor_;
  metadata.reflection = SearchRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SearchResponse::kResultsFieldNumber;
#endif  // !_MSC_VER

SearchResponse::SearchResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SearchResponse::InitAsDefaultInstance() {
}

SearchResponse::SearchResponse(const SearchResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SearchResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchResponse::~SearchResponse() {
  SharedDtor();
}

void SearchResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SearchResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchResponse_descriptor_;
}

const SearchResponse& SearchResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_search_2eproto();
  return *default_instance_;
}

SearchResponse* SearchResponse::default_instance_ = NULL;

SearchResponse* SearchResponse::New() const {
  return new SearchResponse;
}

void SearchResponse::Clear() {
  results_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SearchResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string results = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_results:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_results()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->results(this->results_size() - 1).data(),
            this->results(this->results_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_results;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SearchResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated string results = 1;
  for (int i = 0; i < this->results_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->results(i).data(), this->results(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->results(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SearchResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated string results = 1;
  for (int i = 0; i < this->results_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->results(i).data(), this->results(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->results(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SearchResponse::ByteSize() const {
  int total_size = 0;

  // repeated string results = 1;
  total_size += 1 * this->results_size();
  for (int i = 0; i < this->results_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->results(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SearchResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SearchResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SearchResponse::MergeFrom(const SearchResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  results_.MergeFrom(from.results_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SearchResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchResponse::CopyFrom(const SearchResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchResponse::IsInitialized() const {

  return true;
}

void SearchResponse::Swap(SearchResponse* other) {
  if (other != this) {
    results_.Swap(&other->results_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SearchResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchResponse_descriptor_;
  metadata.reflection = SearchResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace examples

// @@protoc_insertion_point(global_scope)
