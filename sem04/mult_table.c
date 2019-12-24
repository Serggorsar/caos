#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    printf("%*s", n, "");
    int i = a;
    for (; i != b; i += 1) {
        printf(" %*d", n, i);
    }
    printf("\n");
    i = a; 
    for (; i != b; i += 1) {
        printf("%*d", n, i);
        int j = a;
        for(; j != b; j += 1) {
            printf(" %*lld", n, (long long) j*i);
        }
        printf("\n");
    }
    return 0;
}

