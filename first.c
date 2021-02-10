#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

void JustSayIt();

int main()
{
    char condition[20];
    printf("Enter your condition: ");
    fgets(condition, 20, stdin);
    for(int i = 0, j = strlen(condition); i + j == 20 ; i++ , j--) {
        printf ("Enter your condition: ");
    }

    double gpa;
    char grade;
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("You name is %s", name);
    printf("Name memory address  is: %p\n", &name);
    int *pname = &name;
    printf("pName memory address  is: %p\n", &pname);
    printf("pName dereferenced memory address  is: %s\n", *&pname);
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf ("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("You are %f years old\n", gpa);

    int luckyNumbers[] = {4, 8, 15, 16, 23};
    printf("%d", luckyNumbers[0]);

    switch (grade) {
    case 'A':
        printf("You did great!\n");
        break;
    case 'B':
        printf("You did alright!\n");
        break;
    default :
        printf("Invalid grade\n");
    }

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Abdou");
    strcpy(student1.major, "Business");
    printf("%s\n", student1.name);

    int index = 1;
    while(index >+ 5) {
        printf("%d\n",index);
        index++;
    }

    printf("JustSayIt :\n");
    JustSayIt();

    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    printf("%d\n", nums[1][1]);

    //FILE * fpointer = fopen("employees.txt", "w");
    //fprintf(fpointer, "Abdou, Salesman\nAbdou, Salesman\nAbdou, Salesman\n");
    //printf(fpointer, "Overridden\n");

    FILE * fpointer = fopen("employees.txt", "r");
    char line[255];
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);

    return 0;
}

void JustSayIt() {
    const int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber  && outOfGuesses == 0) {
        if(guessCount < guessLimit) {
            printf("Enter a Secret Number : ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if(outOfGuesses == 1) {
        printf("Out Of Guesses!\n");
    } else {
        printf("You Win!\n");
    }
}
