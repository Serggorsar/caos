#include <stdio.h>
void func(int a[]) {
    a[0] =1;
    a[1] = 1;
    return;
}


int main() {
    int buf[2];
    func(buf);
    printf("%d", buf[1]);
    int N;
    //scanf("%d", &N);
    //int arr1[N];
   // printf("%d\n", sizeof(arr1) == 16 * sizeof(int));
    int arr2[] = {1, 2, 3};
    int arr3[0];
    printf("%d %d\n", arr3[17], sizeof(arr3));
    return 0;
}
