#include <stdio.h>

int mystrcmp(const char *s1, const char *s2) {
    for (; *s1 || *s2; ++s1, ++s2) {
        if ((unsigned char)*s1 < (unsigned char)*s2) {
            return -1;
        }
        if ((unsigned char)*s1 > (unsigned char)*s2) {
            return 1;
        }
    }
    return 0;
}

