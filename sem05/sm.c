#include <stdio.h>
#include <string.h>

size_t mystrlen(const char* s) {
    size_t len = 0;
    for (const char* c = s; *c; c++) {
        len++;
    }
    return len;
}

int main() {
    char buf[6] = "Hello"; // 0-terminated
    // buf + 3
    // &a[n] = a + n
    // buf + 3 = &buf[3]
    // 0 - H
    // 1 - e
    // 2 - 0
    // 3 - l
    // 4 - o
    // 5 - 0
    // printf("%d %c\n", *buf, *buf);
    // printf("%d %c\n", buf[4], *(buf + 4));
    // printf("%d %c\n", buf[5], *(buf + 5));
    // printf("%d %c\n", buf[6], *(buf + 6));
    // printf("%d %c\n", buf[11], *(buf + 11));
    // printf("%d %c\n", *(buf + 5), *(buf + 5));
    // for (int i = 0; i < 12; i++) {
    //     printf("%d %d %c\n", i, *(buf + i), *(buf + i));
    // }
    printf("%s\n", buf);
    printf("%lu %lu\n\n", strlen(buf), mystrlen(buf));

    // buf: sequence of char


    printf("%c\n", buf[3]);
    printf("%s\n", &buf[3]);



/*
    int n;
    scanf("%d", &n);


    short a[] = {10342, 22341, -30351, 4};

    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(*a));

    printf("%hi %hi\n", *a, a[0]);
    printf("%hi %hi\n", *(a + 1), a[1]); // *(a + n * sizeof(a))
    // *(a + n) = a[n]
    short *b = &a[3];
    short *c = a + 3;
    printf("%hi   ****", b[-1]);  // b[-1] == *(b - 1)
    printf("%hi %hi %hi\n", *b, a[3], *c);
    printf("%lx %lx %lx\n", b, &a[3], c);
    printf("%lx %lx\n", a, &a[1]);*/
}




// #include <stdio.h>
// #include <string.h>

// size_t mystrlen(const char *s) {
//     size_t len = 0;
//     while (*(s++)) {
//         ++len;
//     }
//     return len;
// }


// int main() {
//     // 0 - terminator
//     char s[] = "He\0lo"; // {'H', 'e', 'l', 'l', 'o' , 0} - строковый литерал
//     printf("%c %s %lu %lu %lu\n", *s, s + 3, sizeof s, strlen(s), mystrlen(s));
//     // int a[] = {1, 2, 3, 4, 5}; // a[-1] == *(a - 1)
//     // printf("%d %d\n", a[6], *a); // size_t
//     // printf("%p %d %d\n", a + 1, *(a + 1), a[1]);
//     // printf("%d %d %d\n", sizeof a[0], sizeof a, sizeof *a);
//     // // a[n] == *(a + n * sizeof int) // == n[a] == *(n + a * sizeof short)
//     // int *b = a + 3;
//     // printf("%p %d %d\n", b, *b, b[-1], *(b - 1));
//     // printf("%d %d\n", sizeof a, sizeof b);
    

// }