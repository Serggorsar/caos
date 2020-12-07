#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

void concatenate(char* res, const char* s1, const char* s2) {
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    res = realloc(res, (len1 + len2 + 1) * sizeof(*res));
    if (res == NULL) {
        exit(1);
    }
    strncpy(res, s1, len1);
    strncpy(res + len1, s2, len2 + 1);
    printf("%s\n", res);
}

void concatenate2(char*res, size_t len, const char* s1, const char* s2) {
    snprintf(res, len, "%s%s", s1, s2);
}

char* strcopy(const char* s) {
    char* res = calloc(strlen(s), sizeof(*s));
    strcpy(res, s);
    return res;
}


int main() { // int("120", 5)
    //char* s = malloc(1);
    char *s = malloc(10);
    if (!s) {
        printf("%d", errno);
        exit(1);
    }
    concatenate2(s, 10, "$3234232", "dgwudfew");
    printf("%s\n", s);
    free(s);
    return 0;

    // char s[45] = "5634t"; // a[n] = *(a+n)
    // char a;
    // int b, c;
    // sscanf(s, "%d %d", &b, &c);
    // printf("%d %d", b, c);
    //
}


// global

// local static - stack
// dynamic - heap

// int a[45]; // esp -= +=
// int b;


// char *c = malloc(45 * sizeof(*c)); // 0xcdea80 // C++ allocators
// // alignement 
// char *d = malloc(6 * sizeof(*d));

// c = realloc(c, 90 * sizeof(*c));

// // []
// // [copy in first 45 elements][.....45]


// std::vector // 16 32 64 128 256 512 ... 8192 ... – 31/53/97/193
// push_back() - O(1) // .length() == 16
// 4096 




// free(c);
// void* -> type*
// type* -> void*
// void f(void*, sizeof(type))


// char path[PATH_MAX];

// PATH_MAX <limits.h>

// double arr[size];

// foo(a, b, c, d)

// args

// /// address of return

// locals


