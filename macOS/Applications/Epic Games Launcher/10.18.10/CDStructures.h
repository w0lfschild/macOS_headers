//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct FCocoaRunLoopSource {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct TLockFreePointerListLIFO<FCocoaRunLoopTask> _field3;
    struct TArray<FCocoaRunLoopTask *, FDefaultAllocator> _field4;
    struct __CFRunLoop *_field5;
    struct __CFDictionary *_field6;
};

struct FIndexedPointer {
    unsigned long long _field1;
};

struct FLockFreePointerListLIFORoot<0, 1> {
    struct FPaddingForCacheContention<0> _field1;
    struct FIndexedPointer _field2;
    struct FPaddingForCacheContention<0> _field3;
};

struct FMenuEntryBlock;

struct FMultiBox;

struct FPaddingForCacheContention<0>;

struct FReferenceControllerBase;

struct FScriptContainerElement;

struct FSharedReferencer<ESPMode::NotThreadSafe> {
    struct FReferenceControllerBase *ReferenceController;
};

struct FSlateRect {
    float Left;
    float Top;
    float Right;
    float Bottom;
};

struct FString {
    struct TArray<wchar_t, FDefaultAllocator> Data;
};

struct FWeakReferencer<ESPMode::NotThreadSafe> {
    struct FReferenceControllerBase *ReferenceController;
};

struct ForAnyElementType {
    struct FScriptContainerElement *Data;
};

struct IApplication;

struct ITextInputMethodContext;

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct TArray<FCocoaRunLoopTask *, FDefaultAllocator> {
    struct ForAnyElementType _field1;
    int _field2;
    int _field3;
};

struct TArray<unsigned char, FDefaultAllocator> {
    struct ForAnyElementType AllocatorInstance;
    int ArrayNum;
    int ArrayMax;
};

struct TArray<wchar_t, FDefaultAllocator> {
    struct ForAnyElementType AllocatorInstance;
    int ArrayNum;
    int ArrayMax;
};

struct TLockFreePointerListLIFO<FCocoaRunLoopTask> {
    struct FLockFreePointerListLIFORoot<0, 1> _field1;
};

struct TSharedPtr<IApplication, ESPMode::NotThreadSafe> {
    struct IApplication *Object;
    struct FSharedReferencer<ESPMode::NotThreadSafe> SharedReferenceCount;
};

struct TSharedPtr<ITextInputMethodContext, ESPMode::NotThreadSafe> {
    struct ITextInputMethodContext *Object;
    struct FSharedReferencer<ESPMode::NotThreadSafe> SharedReferenceCount;
};

struct TSharedPtr<const FMenuEntryBlock, ESPMode::NotThreadSafe> {
    struct FMenuEntryBlock *Object;
    struct FSharedReferencer<ESPMode::NotThreadSafe> SharedReferenceCount;
};

struct TSharedRef<ITextInputMethodContext, ESPMode::NotThreadSafe> {
    struct ITextInputMethodContext *_field1;
    struct FSharedReferencer<ESPMode::NotThreadSafe> _field2;
};

struct TWeakPtr<const FMenuEntryBlock, ESPMode::NotThreadSafe> {
    struct FMenuEntryBlock *Object;
    struct FWeakReferencer<ESPMode::NotThreadSafe> WeakReferenceCount;
};

struct TWeakPtr<const FMultiBox, ESPMode::NotThreadSafe> {
    struct FMultiBox *Object;
    struct FWeakReferencer<ESPMode::NotThreadSafe> WeakReferenceCount;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void *_field1;
    long long _field2;
} CDStruct_eb6fb79d;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

// Template types
typedef struct TArray<unsigned char, FDefaultAllocator> {
    struct ForAnyElementType AllocatorInstance;
    int ArrayNum;
    int ArrayMax;
} TArray_e98fc9dd;

typedef struct TSharedPtr<const FMenuEntryBlock, ESPMode::NotThreadSafe> {
    struct FMenuEntryBlock *Object;
    struct FSharedReferencer<ESPMode::NotThreadSafe> SharedReferenceCount;
} TSharedPtr_75cd507a;

typedef struct TSharedRef<ITextInputMethodContext, ESPMode::NotThreadSafe> {
    struct ITextInputMethodContext *_field1;
    struct FSharedReferencer<ESPMode::NotThreadSafe> _field2;
} TSharedRef_c82b2832;

typedef struct TWeakPtr<const FMenuEntryBlock, ESPMode::NotThreadSafe> {
    struct FMenuEntryBlock *Object;
    struct FWeakReferencer<ESPMode::NotThreadSafe> WeakReferenceCount;
} TWeakPtr_438c4641;

typedef struct TWeakPtr<const FMultiBox, ESPMode::NotThreadSafe> {
    struct FMultiBox *Object;
    struct FWeakReferencer<ESPMode::NotThreadSafe> WeakReferenceCount;
} TWeakPtr_392875dc;

