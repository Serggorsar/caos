((a.b).c)
(((long long) i) * j)
(sizeof (*ptr))
(1u << 31) - 1

a + b < c >> 5 && y != 6

(a *= (b *= c))

(a += 5) + (b *= 6)



c = (a /= 2) + b / a + (a % 2 && b % 2)
a / 2 + b / 2 + (a & b & 1)

(1u << 31) - 1

4 < 3 + 4 && 4 << 2 & 1

(a += (b += c))


a, b
a; b
a && b
a || b

векторно - конвейерная архитектура

branch prediction

if (expr) {
    body_if
} else {
    body_else
}


int a[15]; // .data .bss .rodata == read-only data

// heap + stack ~ 0xc0000

int g;
int b[] = {1, 2, 3, 4, 5};

// stack

int main {
    foo(1, 2, 3)
l1:
}
type foo(args) {
    locals
    foo(new_args)
    return
}

frame
f(a += 9)

args ->
returned address -> goto on this address
locals

cdecl // stdcall // fastcall


main() {
    int b = 8
    b += 9
    foo()
l1:
    printf(b)
}

for (i) {
    for(j) {
        printf("%lld", (long long) i * j);
    }
}


n 0x564368fab - 
m
i
j 
new k


new k <- esp / rsp
a[0] // a       // 0x564368fa0
a[1] // a + 1   // 0x564368fa4
a[2] // a + 2   // 0x564368fa8

a[14] // a + 14
g <- *(a + 15 * sizeof())



int a[7];
int b[] = {1, 2, 3, 4, 5};

0xc0020320 // a[0] // *a - разыменование
0xc0020324 // a[1] // *(a + 1) // адресная арифметика  // * sizeof int
0xc0020328 // a[2] // *(a + 2)


int *c;
char t;
int d;
long long e;

.data - global initialized
.bss - global uninitialized
.rodata - read only data "abcde"
// map
#pragma pack(2)
struct {
    t_d
}
#pragma unpack

t___d
 
stack - 8 byte
c
d
e
a[0] a[1]
a[2] a[3]
a[4] a[5]
a[6] 
выравнивание стека


heap

