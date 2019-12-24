#include<stdio.h>
int main() {
    char a[3];
    int b[4];
    double c[5];
    int *p = a;
    int *q = b;
    int *t = c;
    printf("%d %d\n", p-q, q-t);
    int *pt = 0;
    if (!pt) {
        printf("NULL");
    }
    return 0;
}
