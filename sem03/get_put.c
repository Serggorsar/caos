#include <stdio.h>
int main(void) {
    int ch;
    int cg = '*';
    while((ch = getchar()) != EOF) {
        putchar(ch);
        putchar(cg);
    }
    putchar('\n');
    return 0;
}

