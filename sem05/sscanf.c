#include <stdio.h>
#include <stdlib.h>
size_t concatenate(char *buf, size_t size, const char *s1, const char *s2)
{
    return snprintf(buf, size, "%s%s", s1, s2);
}



int main() {
    //char a[10];
    //scanf("%9s", a);
    //printf("%s\n", a);
    char a[45];
    concatenate(a, 44, "Hello ", "world");
    printf("%s\n", a);
    //char b[20];
    //fgets(b, 13, stdin);
    //fputs(b, stdout);
}
