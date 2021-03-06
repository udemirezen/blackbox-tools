#ifndef DECODERS_H_
#define DECODERS_H_

/* Decoders for reading advanced data formats from data streams */
#include <stdint.h>

#include "stream.h"

void streamReadTag2_3S32(mmapStream_t *stream, int32_t *values);
void streamReadTag8_4S16_v1(mmapStream_t *stream, int32_t *values);
void streamReadTag8_4S16_v2(mmapStream_t *stream, int32_t *values);
void streamReadTag8_8SVB(mmapStream_t *stream, int32_t *values, int valueCount);

int16_t streamReadS16(mmapStream_t *stream);

float streamReadRawFloat(mmapStream_t *stream);

#endif
