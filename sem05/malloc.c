#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *concatenate(const char *s1, const char *s2)
{
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    char *ret = malloc((len1+len2+1)*sizeof(char));
    if (ret) {
        memcpy(ret, s1, len1);
        memcpy(ret+len1, s2, len2+1);
    }
    return ret;
}


int main() {
    char *a = concatenate("43", "21");
    printf("%s\n", a);
    free(a);
}
