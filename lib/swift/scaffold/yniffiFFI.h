// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, RustBuffer, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_yniffi_e22e_YrsDoc_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull yniffi_e22e_YrsDoc_new(
      
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsDoc_encode_diff_v1(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer state_vector,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull yniffi_e22e_YrsDoc_get_text(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull yniffi_e22e_YrsDoc_get_array(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull yniffi_e22e_YrsDoc_get_map(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull yniffi_e22e_YrsDoc_transact(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsTransaction_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsTransaction_transaction_apply_update(
      void*_Nonnull ptr,RustBuffer update,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_encode_state_as_update_from_sv(
      void*_Nonnull ptr,RustBuffer state_vector,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_encode_state_as_update(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_encode_update(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_state_vector(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_get_text(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_get_array(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsTransaction_transaction_get_map(
      void*_Nonnull ptr,RustBuffer name,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsTransaction_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsMap_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsMap_length(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
int8_t yniffi_e22e_YrsMap_contains_key(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer key,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_insert(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer key,RustBuffer value,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsMap_get(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer key,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsMap_remove(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer key,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_clear(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_keys(
      void*_Nonnull ptr,void*_Nonnull tx,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_values(
      void*_Nonnull ptr,void*_Nonnull tx,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_each(
      void*_Nonnull ptr,void*_Nonnull tx,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsMap_observe(
      void*_Nonnull ptr,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsMap_unobserve(
      void*_Nonnull ptr,uint32_t subscription_id,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsArray_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_each(
      void*_Nonnull ptr,void*_Nonnull tx,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsArray_get(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_insert(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer value,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_insert_range(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer values,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsArray_length(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_push_back(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer value,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_push_front(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer value,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_remove(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_remove_range(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,uint32_t len,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsArray_to_a(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsArray_observe(
      void*_Nonnull ptr,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsArray_unobserve(
      void*_Nonnull ptr,uint32_t subscription_id,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsText_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_format(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,uint32_t length,RustBuffer attrs,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_append(
      void*_Nonnull ptr,void*_Nonnull tx,RustBuffer text,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_insert(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer chunk,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_insert_with_attributes(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer chunk,RustBuffer attrs,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_insert_embed(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer content,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_insert_embed_with_attributes(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t index,RustBuffer content,RustBuffer attrs,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer yniffi_e22e_YrsText_get_string(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_remove_range(
      void*_Nonnull ptr,void*_Nonnull tx,uint32_t start,uint32_t length,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsText_length(
      void*_Nonnull ptr,void*_Nonnull tx,
    RustCallStatus *_Nonnull out_status
    );
uint32_t yniffi_e22e_YrsText_observe(
      void*_Nonnull ptr,uint64_t delegate,
    RustCallStatus *_Nonnull out_status
    );
void yniffi_e22e_YrsText_unobserve(
      void*_Nonnull ptr,uint32_t subscription_id,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsMapIteratorDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsMapKVIteratorDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsMapObservationDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsArrayEachDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsArrayObservationDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_YrsTextObservationDelegate_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_yniffi_e22e_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_yniffi_e22e_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_yniffi_e22e_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_yniffi_e22e_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );