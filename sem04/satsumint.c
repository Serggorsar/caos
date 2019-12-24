#include <stdint.h>
#include <stdio.h>

int32_t satsum(int32_t v1, int32_t v2) {
    int32_t res;
    if(!__builtin_add_overflow(v1, v2, &res)) {
        return v1+v2;
    }
    if (v1 > 0) {
        return (int32_t)((1u<<31)-1);
    }
    return (int32_t)(1u<<31);
}
/*
int main() {
    int a = (1u<<30) + 5;
    int b = a;
    printf("%d", satsum(-a, -b));
}*/

