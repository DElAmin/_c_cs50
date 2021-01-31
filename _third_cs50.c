#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

typedef struct nodeT
{
    int number;
    struct nodeT *left;
    struct nodeT *right;
}
nodeT;

int main(void)
{
    node *list = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    if (n != NULL)
    {
        //(*n).number = 1;
        n -> number = 1;
        n -> next = NULL;
    }

    list = n;

    n = malloc(sizeof(node));
    if (n != NULL)
    {
        n -> number = 2;
        n -> next = NULL;
    }

    list -> next = n;

    n = malloc(sizeof(node));
    if (n != NULL)
    {
        n -> number = 3;
        n -> next = NULL;
    }

    list -> next -> next = n;

    for (node *tmp = list; tmp != NULL; tmp = tmp -> next)
    {
        printf("%i\n", tmp -> next);
    }

    while (list != NULL)
    {
        node *tmp = list -> next;
        free(list);
        list = tmp;
    }



    int *listE = malloc(3 * sizeof(int));
    if (listE == NULL)
    {
        return 1;
    }
    int *tmpE = realloc(list, 4 * sizeof(int));
}
