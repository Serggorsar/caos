#include <stdio.h>
union U
{
    float f;
    struct {
        unsigned m:23;
        unsigned p:8;
        unsigned s:1;
    };
    unsigned u;
};
int main() {
    union U u;
    u.f = 675.34375;
    printf("%u %u %u\n", u.s, u.p, u.m);
    printf("%x %x %x\n", u.s, u.p, u.m);
    printf("%x %x %x\n", u.u>>31, ((u.u>>23)<<1)>>1, (u.u<<9)>>9);
    printf("%x %x %x\n", (u.u&(1<<31))>>31, (u.u&(255<<23))>>23, u.u&((1<<24)-1));

    return 0;
}
