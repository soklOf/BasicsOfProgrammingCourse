#ifndef VECTORLAB_VOIDVECTOR_H
#define VECTORLAB_VOIDVECTOR_H

#include <mem.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct vectorVoid {
    void *data;
    size_t size;
    size_t capacity;
    size_t baseTypeSize;
} vectorVoid;

vectorVoid createVectorV(size_t n, size_t baseTypeSize);

void reserveV(vectorVoid *v, size_t newCapacity);

void shrinkToFitV(vectorVoid *v);

void clearV(vectorVoid *v);

void deleteVectorV(vectorVoid *v);

bool isEmptyV(vectorVoid *v);

bool isFullV(vectorVoid *v);

// записывает по адресу destination index-ый элемент вектора v.
void getVectorValueV(vectorVoid *v, size_t index, void *destination);

//записывает на index-ый элемент вектора v значение, расположенное по
//адресу source
void setVectorValueV(vectorVoid *v, size_t index, void *source);

void popBackV(vectorVoid *v);

void pushBackV(vectorVoid *v, void *source);
#endif //VECTORLAB_VOIDVECTOR_H
