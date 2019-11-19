#include <stdio.h>

// https://ru.wikipedia.org/wiki/Gets
char *gets1(char *s)
{
/*очистка буфера ввода */
	fflush(stdin);

    int i, k = getchar();

    /* Возвращаем NULL если ничего не введено */
    if (k == EOF)
        return NULL;

    /* Считываем и копируем в буфер символы пока не достигнем конца строки или файла */
    for (i = 0; k != EOF && k != '\n'; ++i) {
        s[i] = k;
        k = getchar();

        /* При обнаружении ошибки результирующий буфер непригоден */
        if (k == EOF && !feof(stdin))
            return NULL;
    }

    /* Нуль-терминируем и возвращаем буфер в случае успеха.
    Символ перевода строки в буфере не хранится. */
    s[i] = '\0';

    return s;
}

int main(void)
{
	const int BUFSIZE = 10;
	char buf[BUFSIZE];
	gets1(buf);
	puts(buf);
	return 0;
}