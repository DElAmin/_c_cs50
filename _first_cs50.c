#include <stdio.h>

struct {
    char name[20];
    char number[20];
}
person;

int main (int argc, char argv[])
{
    if (argc == 2)
    {
        printf("hello, %c\n", argv[0]);
    }
    else
    {
        printf("hello, world\n");
        //return 1;//$?
    }

    char $str1[] = "Hi";
    char $str2[] = "Hi";
    if (strcmp($str1, $str2) == 0) ;

    int tabE[] = {100, 5, 85, 15, 60};
    int lenE = sizeof(tabE);
    printf("%d\n", lenE);
    printf("\n");
    show(tabE);
    printf("\n");
    printf("\n");

    int initE = 0;
    sort(tabE, initE);
    //bubble(tabE, initE);

    printf("\n");
    show(tabE);
    printf("\n");
}

void show (int tab[]) {
    int len = sizeof(tab);
    for (int i=0; i <= len; i++) {
        printf("%d, ", tab[i]);
    }
}

int sort (int tab[], int init) {
    int len = sizeof(tab);

    if (len == init) return 0;

    int index = init;
    for (int i = init + 1; i < len; i++) {
        if (tab[i] < tab[index]) {
            index = i;
        }
    }
    swap(&tab[init], &tab[index]);

    /*int tempInit;
    tempInit = tab[init];
    int tempIndex;
    tempIndex = tab[index];
    tab[index] = tempInit;
    tab[init] = tempIndex;*/

    show(tab);
    printf("\n");

    init++;
    return sort(tab, init);
}

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int bubble (int tab[], int init) {
    int len = sizeof(tab);

    if ((len - init) == 2) {
        if (tab[0] > tab[1]) swap(tab[0], tab[1]);
        return 0;
    }

    int index = 0;
    for (int i = 1; i <= len - init -2; i++) {
        if (tab[index] > tab[i]) swap(tab[index], tab[i]);
    }

    init++;
    return bubble(tab, init);
}



