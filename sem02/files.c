#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

// #define int32_t int

c -> b
a -> c
int main() {
    FILE* fp = fopen("test.txt", "r");
    if (fp == NULL) {
        puts("error with reading file");
        return 1;
    }
    // -128 ... 127
    // 218 - 1....... 218-256 = -38
    int a = fgetc(fp); // 0..255
    //printf("%d", a);
    fputc(a, stdout);
    fflush(fp);
    fclose(fp);

    // int a = 1234567890;
    // //int b = 1234567890;
    // long long c = 2ll * a;
    // fprintf(stdout, "%lld", c);
    // stdin
    // stderr

    // uint64_t c = (uint64_t)a + b

    //printf("%" PRId8 "\n", a + b );
 
    //printf("%" PRIu8 "\n", a + b );

    // integer promotion
    // if sizeof(type) > int -> max(type)



    // int64_t a;
    // uint16_t b;
    // scanf("%" SCNd64 "%" SCNu16 "", &a, &b);
    // printf("%" PRIo8 "", a + b );

}
// scanf  - SCN
// printf - PRI
// d u o x X

// 8 16 32 64