#include <stdio.h>
#include "math.h"


int main(void) {
    printf("Hello, Venture\n");
    int a = 67;
    int b = 34;

    int64_t c = math_add_is_ok(a,b);
    printf("%ld\n",c);
    return 0;
}