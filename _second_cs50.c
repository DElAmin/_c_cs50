#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int n = 50;
    printf("%p\n", *&n);

    int *p = &n;
    printf("%p\n", p);

    char *s = "hi!";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", s[0]);
    printf("%p\n", &s[0]);
    printf("%p\n", s[1]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);

    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));

    char *t = malloc(strlen(s) + 1);
    if (t == NULL) return 1;

    //strcpy(t, s);
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        //t[i] = s[i];
        *(t + i) = *(s + i);
    }
    //t[0] = toupper(t[0]);
    *t = toupper(*t);
    printf("%s\n", s);
    printf("%s\n", t);

    free(t);

    int *x;
    x = malloc(sizeof(int));
    *x = 15;
    printf("%i\n", *x);
    printf("%p\n", x);
    free(x);
    printf("%i\n", *x);
}
