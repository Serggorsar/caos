#include<stdio.h>
// argc
// argv

// bar
int main(int argc, char** argv) { // char *argv[] a[i] === *(a+i)
	// выражение
	// x = 9
	// type* argv = &x
	// *(argv++)
	// 1) значение выражения
	// 2) побочные эффекты argv -> argv + 1
	char** argv1 = argv;
	
	printf("%p %s %c\n", argv1, *(argv1++), **argv1);
	//printf("%p %p %c\n", argv1, *argv1, **argv1);

	printf("%p %s %c\n", argv1, argv1[0], argv1[0][0]);
	argv1++; // argv1 += sizeof(ptr)
	printf("%p %s %s\n", argv1, *argv1, argv1[-2]); // *(argv1-2)
	printf("%p %s %s\n", argv, *argv, argv[-2]); // *(argv-2)

	// char bar[] = "abcd";
	// // char bar[] = "443f3"; bar - ptr
	// // char *bar1 = NULL; //
	// // char *bar2 = bar; //     bar[n] = *(bar+n)
	// // char *bar3 = malloc(); //

	// // int a = 8;
	// // int* a1 = NULL;
	// // int* a2 = &a;


	// // printf("%p %d\n", bar, 256 + ((int) bar) % 256);
	// printf("%s\n", bar);
	// char *p1 = bar;
	// p1++;
	// *p1 = '4'; // *p1 == *(bar + 1) == bar[1]
	// printf("%p %p\n", bar, p1);
	// printf("%s\n", bar);
	// // char *p3 = bar;
	// // char bar2 = bar;
	// // char *p2 = bar2;
	// // printf("%p %d %p\n", p1, p2, p3);
}