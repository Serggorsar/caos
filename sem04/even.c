#include <stdio.h>
#define even(a) a%2 == 0 ? 1 : 0

int b;
char c[4] = "abcd";
extern int e;
int main()
{
    if(even(4+6+5)) {
        printf("15");
    }
    if(even(78)) {
        printf("78");
    }
    static int r;
    char *s = "abcd";
    //s[2] = 'y';
    const unsigned u = 34423;
    printf("%d\n", b);
    printf("%d\n", e);
    return 0;
}
