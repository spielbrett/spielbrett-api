// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.36.3
// 	protoc        (unknown)
// source: proto/services/instance_host/instance_host.proto

package instance_host

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	_ "google.golang.org/protobuf/types/known/anypb"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type CreateInstanceRequest struct {
	state         protoimpl.MessageState `protogen:"open.v1"`
	InstanceType  string                 `protobuf:"bytes,1,opt,name=instance_type,json=instanceType,proto3" json:"instance_type,omitempty"`
	UserIds       []string               `protobuf:"bytes,2,rep,name=user_ids,json=userIds,proto3" json:"user_ids,omitempty"`
	unknownFields protoimpl.UnknownFields
	sizeCache     protoimpl.SizeCache
}

func (x *CreateInstanceRequest) Reset() {
	*x = CreateInstanceRequest{}
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[0]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *CreateInstanceRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*CreateInstanceRequest) ProtoMessage() {}

func (x *CreateInstanceRequest) ProtoReflect() protoreflect.Message {
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[0]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use CreateInstanceRequest.ProtoReflect.Descriptor instead.
func (*CreateInstanceRequest) Descriptor() ([]byte, []int) {
	return file_proto_services_instance_host_instance_host_proto_rawDescGZIP(), []int{0}
}

func (x *CreateInstanceRequest) GetInstanceType() string {
	if x != nil {
		return x.InstanceType
	}
	return ""
}

func (x *CreateInstanceRequest) GetUserIds() []string {
	if x != nil {
		return x.UserIds
	}
	return nil
}

type CreateInstanceResponse struct {
	state         protoimpl.MessageState `protogen:"open.v1"`
	InstanceId    string                 `protobuf:"bytes,1,opt,name=instance_id,json=instanceId,proto3" json:"instance_id,omitempty"`
	Markup        map[string]string      `protobuf:"bytes,2,rep,name=markup,proto3" json:"markup,omitempty" protobuf_key:"bytes,1,opt,name=key" protobuf_val:"bytes,2,opt,name=value"`
	unknownFields protoimpl.UnknownFields
	sizeCache     protoimpl.SizeCache
}

func (x *CreateInstanceResponse) Reset() {
	*x = CreateInstanceResponse{}
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[1]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *CreateInstanceResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*CreateInstanceResponse) ProtoMessage() {}

func (x *CreateInstanceResponse) ProtoReflect() protoreflect.Message {
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[1]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use CreateInstanceResponse.ProtoReflect.Descriptor instead.
func (*CreateInstanceResponse) Descriptor() ([]byte, []int) {
	return file_proto_services_instance_host_instance_host_proto_rawDescGZIP(), []int{1}
}

func (x *CreateInstanceResponse) GetInstanceId() string {
	if x != nil {
		return x.InstanceId
	}
	return ""
}

func (x *CreateInstanceResponse) GetMarkup() map[string]string {
	if x != nil {
		return x.Markup
	}
	return nil
}

type PerformActionRequest struct {
	state         protoimpl.MessageState `protogen:"open.v1"`
	InstanceId    string                 `protobuf:"bytes,1,opt,name=instance_id,json=instanceId,proto3" json:"instance_id,omitempty"`
	UserId        string                 `protobuf:"bytes,2,opt,name=user_id,json=userId,proto3" json:"user_id,omitempty"`
	Action        string                 `protobuf:"bytes,3,opt,name=action,proto3" json:"action,omitempty"`
	unknownFields protoimpl.UnknownFields
	sizeCache     protoimpl.SizeCache
}

func (x *PerformActionRequest) Reset() {
	*x = PerformActionRequest{}
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[2]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *PerformActionRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PerformActionRequest) ProtoMessage() {}

func (x *PerformActionRequest) ProtoReflect() protoreflect.Message {
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[2]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PerformActionRequest.ProtoReflect.Descriptor instead.
func (*PerformActionRequest) Descriptor() ([]byte, []int) {
	return file_proto_services_instance_host_instance_host_proto_rawDescGZIP(), []int{2}
}

func (x *PerformActionRequest) GetInstanceId() string {
	if x != nil {
		return x.InstanceId
	}
	return ""
}

func (x *PerformActionRequest) GetUserId() string {
	if x != nil {
		return x.UserId
	}
	return ""
}

func (x *PerformActionRequest) GetAction() string {
	if x != nil {
		return x.Action
	}
	return ""
}

type PerformActionResponse struct {
	state         protoimpl.MessageState `protogen:"open.v1"`
	Markup        map[string]string      `protobuf:"bytes,1,rep,name=markup,proto3" json:"markup,omitempty" protobuf_key:"bytes,1,opt,name=key" protobuf_val:"bytes,2,opt,name=value"`
	unknownFields protoimpl.UnknownFields
	sizeCache     protoimpl.SizeCache
}

func (x *PerformActionResponse) Reset() {
	*x = PerformActionResponse{}
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[3]
	ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
	ms.StoreMessageInfo(mi)
}

func (x *PerformActionResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*PerformActionResponse) ProtoMessage() {}

func (x *PerformActionResponse) ProtoReflect() protoreflect.Message {
	mi := &file_proto_services_instance_host_instance_host_proto_msgTypes[3]
	if x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use PerformActionResponse.ProtoReflect.Descriptor instead.
func (*PerformActionResponse) Descriptor() ([]byte, []int) {
	return file_proto_services_instance_host_instance_host_proto_rawDescGZIP(), []int{3}
}

func (x *PerformActionResponse) GetMarkup() map[string]string {
	if x != nil {
		return x.Markup
	}
	return nil
}

var File_proto_services_instance_host_instance_host_proto protoreflect.FileDescriptor

var file_proto_services_instance_host_instance_host_proto_rawDesc = []byte{
	0x0a, 0x30, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73,
	0x2f, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2f, 0x69,
	0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x12, 0x21, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2e, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65,
	0x5f, 0x68, 0x6f, 0x73, 0x74, 0x1a, 0x19, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x70, 0x72,
	0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2f, 0x61, 0x6e, 0x79, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x22, 0x57, 0x0a, 0x15, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e,
	0x63, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x23, 0x0a, 0x0d, 0x69, 0x6e, 0x73,
	0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09,
	0x52, 0x0c, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x54, 0x79, 0x70, 0x65, 0x12, 0x19,
	0x0a, 0x08, 0x75, 0x73, 0x65, 0x72, 0x5f, 0x69, 0x64, 0x73, 0x18, 0x02, 0x20, 0x03, 0x28, 0x09,
	0x52, 0x07, 0x75, 0x73, 0x65, 0x72, 0x49, 0x64, 0x73, 0x22, 0xd3, 0x01, 0x0a, 0x16, 0x43, 0x72,
	0x65, 0x61, 0x74, 0x65, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x52, 0x65, 0x73, 0x70,
	0x6f, 0x6e, 0x73, 0x65, 0x12, 0x1f, 0x0a, 0x0b, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65,
	0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0a, 0x69, 0x6e, 0x73, 0x74, 0x61,
	0x6e, 0x63, 0x65, 0x49, 0x64, 0x12, 0x5d, 0x0a, 0x06, 0x6d, 0x61, 0x72, 0x6b, 0x75, 0x70, 0x18,
	0x02, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x45, 0x2e, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65,
	0x74, 0x74, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e, 0x73, 0x74,
	0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65,
	0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
	0x2e, 0x4d, 0x61, 0x72, 0x6b, 0x75, 0x70, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x52, 0x06, 0x6d, 0x61,
	0x72, 0x6b, 0x75, 0x70, 0x1a, 0x39, 0x0a, 0x0b, 0x4d, 0x61, 0x72, 0x6b, 0x75, 0x70, 0x45, 0x6e,
	0x74, 0x72, 0x79, 0x12, 0x10, 0x0a, 0x03, 0x6b, 0x65, 0x79, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09,
	0x52, 0x03, 0x6b, 0x65, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x3a, 0x02, 0x38, 0x01, 0x22,
	0x68, 0x0a, 0x14, 0x50, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e,
	0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x1f, 0x0a, 0x0b, 0x69, 0x6e, 0x73, 0x74, 0x61,
	0x6e, 0x63, 0x65, 0x5f, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x0a, 0x69, 0x6e,
	0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x49, 0x64, 0x12, 0x17, 0x0a, 0x07, 0x75, 0x73, 0x65, 0x72,
	0x5f, 0x69, 0x64, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x75, 0x73, 0x65, 0x72, 0x49,
	0x64, 0x12, 0x16, 0x0a, 0x06, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x03, 0x20, 0x01, 0x28,
	0x09, 0x52, 0x06, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0xb0, 0x01, 0x0a, 0x15, 0x50, 0x65,
	0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f,
	0x6e, 0x73, 0x65, 0x12, 0x5c, 0x0a, 0x06, 0x6d, 0x61, 0x72, 0x6b, 0x75, 0x70, 0x18, 0x01, 0x20,
	0x03, 0x28, 0x0b, 0x32, 0x44, 0x2e, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74,
	0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e,
	0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x50, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41,
	0x63, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x2e, 0x4d, 0x61,
	0x72, 0x6b, 0x75, 0x70, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x52, 0x06, 0x6d, 0x61, 0x72, 0x6b, 0x75,
	0x70, 0x1a, 0x39, 0x0a, 0x0b, 0x4d, 0x61, 0x72, 0x6b, 0x75, 0x70, 0x45, 0x6e, 0x74, 0x72, 0x79,
	0x12, 0x10, 0x0a, 0x03, 0x6b, 0x65, 0x79, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x03, 0x6b,
	0x65, 0x79, 0x12, 0x14, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28,
	0x09, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x3a, 0x02, 0x38, 0x01, 0x32, 0xa6, 0x02, 0x0a,
	0x13, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x48, 0x6f, 0x73, 0x74, 0x53, 0x65, 0x72,
	0x76, 0x69, 0x63, 0x65, 0x12, 0x87, 0x01, 0x0a, 0x0e, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x49,
	0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x12, 0x38, 0x2e, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62,
	0x72, 0x65, 0x74, 0x74, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e,
	0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x43, 0x72, 0x65, 0x61,
	0x74, 0x65, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73,
	0x74, 0x1a, 0x39, 0x2e, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2e, 0x73,
	0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65,
	0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x49, 0x6e, 0x73, 0x74,
	0x61, 0x6e, 0x63, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x12, 0x84,
	0x01, 0x0a, 0x0d, 0x50, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e,
	0x12, 0x37, 0x2e, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2e, 0x73, 0x65,
	0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f,
	0x68, 0x6f, 0x73, 0x74, 0x2e, 0x50, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41, 0x63, 0x74, 0x69,
	0x6f, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x38, 0x2e, 0x73, 0x70, 0x69, 0x65,
	0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2e, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x2e,
	0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73, 0x74, 0x2e, 0x50, 0x65,
	0x72, 0x66, 0x6f, 0x72, 0x6d, 0x41, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f,
	0x6e, 0x73, 0x65, 0x22, 0x00, 0x42, 0x4a, 0x5a, 0x48, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e,
	0x63, 0x6f, 0x6d, 0x2f, 0x73, 0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2f, 0x73,
	0x70, 0x69, 0x65, 0x6c, 0x62, 0x72, 0x65, 0x74, 0x74, 0x2d, 0x61, 0x70, 0x69, 0x2f, 0x67, 0x65,
	0x6e, 0x2f, 0x67, 0x6f, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2f, 0x73, 0x65, 0x72, 0x76, 0x69,
	0x63, 0x65, 0x73, 0x2f, 0x69, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x5f, 0x68, 0x6f, 0x73,
	0x74, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_proto_services_instance_host_instance_host_proto_rawDescOnce sync.Once
	file_proto_services_instance_host_instance_host_proto_rawDescData = file_proto_services_instance_host_instance_host_proto_rawDesc
)

func file_proto_services_instance_host_instance_host_proto_rawDescGZIP() []byte {
	file_proto_services_instance_host_instance_host_proto_rawDescOnce.Do(func() {
		file_proto_services_instance_host_instance_host_proto_rawDescData = protoimpl.X.CompressGZIP(file_proto_services_instance_host_instance_host_proto_rawDescData)
	})
	return file_proto_services_instance_host_instance_host_proto_rawDescData
}

var file_proto_services_instance_host_instance_host_proto_msgTypes = make([]protoimpl.MessageInfo, 6)
var file_proto_services_instance_host_instance_host_proto_goTypes = []any{
	(*CreateInstanceRequest)(nil),  // 0: spielbrett.services.instance_host.CreateInstanceRequest
	(*CreateInstanceResponse)(nil), // 1: spielbrett.services.instance_host.CreateInstanceResponse
	(*PerformActionRequest)(nil),   // 2: spielbrett.services.instance_host.PerformActionRequest
	(*PerformActionResponse)(nil),  // 3: spielbrett.services.instance_host.PerformActionResponse
	nil,                            // 4: spielbrett.services.instance_host.CreateInstanceResponse.MarkupEntry
	nil,                            // 5: spielbrett.services.instance_host.PerformActionResponse.MarkupEntry
}
var file_proto_services_instance_host_instance_host_proto_depIdxs = []int32{
	4, // 0: spielbrett.services.instance_host.CreateInstanceResponse.markup:type_name -> spielbrett.services.instance_host.CreateInstanceResponse.MarkupEntry
	5, // 1: spielbrett.services.instance_host.PerformActionResponse.markup:type_name -> spielbrett.services.instance_host.PerformActionResponse.MarkupEntry
	0, // 2: spielbrett.services.instance_host.InstanceHostService.CreateInstance:input_type -> spielbrett.services.instance_host.CreateInstanceRequest
	2, // 3: spielbrett.services.instance_host.InstanceHostService.PerformAction:input_type -> spielbrett.services.instance_host.PerformActionRequest
	1, // 4: spielbrett.services.instance_host.InstanceHostService.CreateInstance:output_type -> spielbrett.services.instance_host.CreateInstanceResponse
	3, // 5: spielbrett.services.instance_host.InstanceHostService.PerformAction:output_type -> spielbrett.services.instance_host.PerformActionResponse
	4, // [4:6] is the sub-list for method output_type
	2, // [2:4] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_proto_services_instance_host_instance_host_proto_init() }
func file_proto_services_instance_host_instance_host_proto_init() {
	if File_proto_services_instance_host_instance_host_proto != nil {
		return
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_proto_services_instance_host_instance_host_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   6,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_proto_services_instance_host_instance_host_proto_goTypes,
		DependencyIndexes: file_proto_services_instance_host_instance_host_proto_depIdxs,
		MessageInfos:      file_proto_services_instance_host_instance_host_proto_msgTypes,
	}.Build()
	File_proto_services_instance_host_instance_host_proto = out.File
	file_proto_services_instance_host_instance_host_proto_rawDesc = nil
	file_proto_services_instance_host_instance_host_proto_goTypes = nil
	file_proto_services_instance_host_instance_host_proto_depIdxs = nil
}
