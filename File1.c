#include <stdio.h>

int main()
{
    int age;
    printf("What is your age?");
    scanf("%d", &age);
    if (age >= 18)
    {
        print("You are at legal age!");
    }
    else
    {
        printf("You are still to young");
    }
}