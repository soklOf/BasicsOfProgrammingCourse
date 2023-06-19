#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "libs/data_structures/vector/vector.h"
#include "libs/data_structures/vector/voidVector.h"


int main() {
    size_t n;
    scanf("%zd", &n);

    vectorVoid v = createVectorV(0, sizeof(float));
    for (int i = 0; i < n; i++) {
        float x;
        scanf("%f", &x);

        pushBackV(&v, &x);
    }
    for (int i = 0; i < n; i++) {
        float x;
        getVectorValueV(&v, i, &x);

        printf("%f ", x);
    }

    return 0;
}
