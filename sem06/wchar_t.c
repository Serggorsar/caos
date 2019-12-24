#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
int main() 
{
    system("chcp 1251");
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wchar_t c;
    int digit = 0, upper = 0, lower = 0;
    while ((c = fgetwc(stdin)) != WEOF) {
        if (iswdigit(c)) {
            digit++;
        } else if (iswalpha(c) && iswlower(c)) {
            lower++;
        } else if (iswalpha(c) && iswupper(c)) {
            upper++;
        }
    }
    printf("%d\n%d\n%d\n", digit, upper, lower);
    return 0;
}