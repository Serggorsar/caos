#include<stdio.h>
#include<stdlib.h>
// y передано по значению
int* foo(char* x, int y, int* z) {
	char x1 = *x;
	printf("%c %d %d\n", *x, y, *z);
	// x += 1
	x1 += 1;
	y += 1;
	*z += 1;

	printf("%c %c %d %d\n", *x, x1, y, *z);
	x = &x1;
	return NULL;
}
int* foo1(int*y) {
    int z = 89;
    int *zptr = &z;
    return zptr;
}
void foo2(int*x, int y, char*z) {
    *x += 1; // arr[7];
   // ++*z;
    ++z; // *(arr + 1)
    *z = 't';
    y++; // *arr
    printf("%d %d %c\n", *x, y, *z);
}
struct S {
    // 64bit
    int i; // 4 ....
    char c; // 1 .......
    double f; // 8
};

void main1() {
    struct S *s;
    s->i = 8;
    s->c = '9';
    s->f = 10.;
    printf("%d %c %lf\n", s.i, s.c, s.f);
    printf("%p\n%p\n%p\n\n", &s.i, &s.c, &s.f);
    printf("%lu", sizeof(s));
}

// main 
// ...  <- esp
// foo
// ....
// x1   <- esp

//f: X->Y - is hash if x1=x2 => hash(x1)==hash(x2)
// array of hashes with ptr
// a1 != a2, but h := hash(a1) == hash(a2) == hash(a3) коллизия
// h -> a1, a2, a3

// vector {
//	 type* data; -> [data]
//   size_t len;
//   size_t cap;
// }

// [val, NULL]
// [val1, next_ptr1], [val2, NULL]

// [val0 next_ptr0] [val1 next_ptr2'] [val2' next_ptr2] [val2 NULL]


// array dynamic (vector)
// добавление в конец О(1) / удаление из конца // в худшем О(N)
// добавление в начало deque
// добавление элемента в произвольную позицию
// a[45]; insert(a[20], 6);
// a[20] // О(1) *(a + 20)


// связанный список // linked list std::list
// добавление в конец О(1) / удаление из конца
// добавление в начало
// добавление элемента в произвольную позицию O(1)  без учета поиска
// a[30] - O(n)

#pragma pack(2);
struct Node {
	int val;
	struct Node* prev;

};
#pragma unpack;

int main() {
	struct Node* head = NULL;
	struct Node* tail = head;
	int a;
	while(scanf("%d", &a) == 1) {
		struct Node* elem = calloc(1, sizeof(*elem));
		elem -> val = a;
		elem -> next = NULL;
		if (tail == NULL) {
			head = elem;
			tail = head;
		} else {
			tail->next = elem;
			tail = tail->next;
		}
	}
	struct Node* tmp = head;
	// 0x7ffeeb0aaa30
	while(tmp) {
		printf("%d ", tmp->val);
		tail = tmp->next;
		// tmp [0 NULL]  [1 next]
		free(tmp);

		tmp = tail;
	}
	malloc(3238572384);


	// char x = 'a';
	// int y = 8, z = 90;
	// // char *x1 = &x;
	// foo(&x, y, &z);
	// printf("%c %d %d\n", x, y, z);
	// int a = 5;
	// int* p = NULL; // объявление типа указателя
	//  // указатель 1) непсевдоним 2) нулевой
	// // C++ ссылка 1) псевдоним, 2) не нулевая int& a = nullptr
	// p = &a;
	// printf("%p %d", p, *p); // разыменование указателя
	// printf("%p %d", p, *p); // разыменование указателя
}