#include "math.h"
#include <stdint.h>

int64_t math_add_is_ok(int a, int b) {
    int c = a + b;
    int64_t casted_c = (int64_t)c;
    return casted_c;
}



