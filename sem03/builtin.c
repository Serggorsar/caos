#include <stdio.h>
int main()
{
    int value1 = 200000000;
    int value2 = value1, result;
    if (__builtin_add_overflow(value1, value2, &result)) {
        printf("Overflow: %d\n", result);
    } else {
        printf("All's ok");
    }
    return 0;
}
