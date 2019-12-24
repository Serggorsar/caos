#include <stdio.h>

int main() {
    char *c = "Hello";
    char s[] = "Hello";
    printf("%d %d", sizeof(c), sizeof(s));
    char t[5] = "0000";
    printf("\n%s\n", t);

    const char *substr;
    for (substr = c; *substr; ++substr){
        printf("%s\n", substr);
    }
    return 0;
}
