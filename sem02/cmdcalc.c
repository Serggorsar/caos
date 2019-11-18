#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[]) {
    if (argc != 3) {
        printf("Error: found %d arguments, needs: 2\n", argc-1);
        exit(1);
    }
    int a = atoi(argv[1]), b = atoi(argv[2]);
    printf("%d\n", a+b);
    return 0;
}
