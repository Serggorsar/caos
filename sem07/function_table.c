#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef double (*funcptr_t)(double);
struct FunctionTable {
    const char* name;
    funcptr_t func;
};
static const struct FunctionTable table[] =
{
    {"cos", cos},
    {"sin", sin},
    {"exp", exp},
    {"log", log},
    {"tan", tan},
    {"sqrt", sqrt}
};

int main() {
    char name[100];
    double x;
    int i = -1;
    while (scanf("%100s%lf", name, &x) == 2) {
        double res = NAN;
        for (i = 0; i < sizeof(table) / sizeof(table[0]); ++i) {
            if(!strcmp(table[i].name, name)) {
                res = table[i].func(x);
                break;
            }
        }
        printf("%a\n", res);
    }
    if (i == -1) {
        printf("%a\n", NAN);
    }
    return 0;
}
