#include <stdio.h>
#include <stdlib.h>

void normalize_path(char *buf) {
    char *ptr = buf, *ptr2 = buf;
    int fl = 0;
    while (*ptr2 != '\0') {
       // printf("%c %c", *ptr, *ptr2);
        if (fl && *ptr2 == '/') {
            ++ptr2;
        } else if (*ptr2 != '/') {
            *ptr = *ptr2;
            ++ptr;
            ++ptr2;
            fl = 0;
        } else if (*ptr2 == '/') {
            fl = 1;
            *ptr = *ptr2;
            ++ptr2;
            ++ptr;
        }
    }
    *ptr = '\0';
}

/*int main() {
    //char *data = malloc(12);
    char data[] = "///a/////b/";
    normalize_path(data);
    printf("%s", data);
}*/
