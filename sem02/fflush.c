#include<stdio.h>
#include<unistd.h>

// https://github.com/hseos/hseos-course/tree/master/2018/02-stdio
int main(void) {
    char i = 'a';
    for(; i < 'z'; ++i) putchar(i);
    // ?? fflush(stdout);
    sleep(10);
    return 0;
}
