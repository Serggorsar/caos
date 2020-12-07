#include<stdio.h>
#include <limits.h>
// escape-последовательности
/*

\n - newline
\r - возврат каретки
\t
\0 - ascii == 0
\\
*/
//"dir1\\file1.txt"


// signed char - 8 bites: -128..127 signed, 0..255 unsigned
// short - 16
// int - 32 
// long - 32/64
// long long - 64
// sizeof(char) <=sizeof(short) <=sizeof(int) <=sizeof(long) <=sizeof(ll)



int main(int argc, char *argv[], char *env[]) {
    int i = 138;
    char c = i;
    // unsigned int
    00000000 00000000 00000000 10001010
    c = 10001010
    11111111 11111111 11111111 10001010
    printf("%d %u", c, c);


    // if (CHAR_MAX==UCHAR_MAX) {
    //     printf("This machine uses unsigned char by default\n");
    // } else {
    //     printf("This machine uses signed char by default\n");
    // }

    // printf("%%%d\n\n", argc);

    // for (char** c = argv; *c; c++) {
    //     printf("%s\n", *c);
    // }
    // printf("\n");

    // for (char** c = env; *c; c++) {
    //     printf("%s\n", *c);
    // }
    // printf("\n");
    //printf("%s %d %s %d", buf, argc, argv[0], argc);
    //printf("%d %s", argc, argv[0]);
    // variadic-argument
    return 0;
}