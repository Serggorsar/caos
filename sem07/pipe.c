#include <stdio.h>
int add(int x, int y)
{
    return x+y;
}
int subtract(int x, int y)
{
    return x-y;
}
int multiply(int x, int y)
{
    return x*y;
}
int main(void)
{
    int a = 10;
    int (*operations[3])(int, int) = {add, multiply, subtract};

    int length = sizeof(operations)/sizeof(operations[0]);

    for(int i=0; i<length;i++)
    {
        printf("%d\n", a);
        a = operations[i](a, (i+2)*5);
    }
    printf("%d\n", a);

    a = 10;
    printf("%d", subtract(multiply(add(a, 10), 15), 20));
    return 0;
}
