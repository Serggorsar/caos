#include <stdio.h>
//#include <typeinfo>

int main()
{
    int x;
    int y = 7;
    char c = 134;
    x = (int)c * 1000 + y;
    printf("%d\n", x);
    printf("%d\n", x * x);
    printf("%lld\n", (long long)x * x);
    printf("%lld\n", (long long)(x * x));
    printf("%lld\n", 1LL * x * x);
    unsigned char d = 134;
    x = (int)d * 1000 + y;
    printf("%d\n", x);
    short s = x;
    printf("%d\n", s);
    s = 32000;
    //printf("%s\n", typeid(s + s).name());
    printf("%d\n", s + s);
    printf("%u\n", 5u - 10);
    printf("%lld\n", 5u - 10);
    return 0;
}
