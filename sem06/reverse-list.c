#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *prev;
};

int main() {
    struct Node *start = NULL, *tmp;
    int a;
    while (scanf("%d", &a) == 1) {
        struct Node *newstart = malloc(sizeof(*newstart));
        newstart -> val = a;
        newstart -> prev = start;
        start = newstart;
    }
    while (start != NULL){
        printf("%d\n", start->val);
        tmp = start;
        start = start->prev;
        free(tmp);
    }
    return 0;
}
