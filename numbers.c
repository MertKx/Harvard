#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x= get_int("What is your first number? ");
    int y= get_int("What is your second number? ");

    if (x<y)
    {
        printf("first is lower than second");
    }
    else if (x==y)
    {
        printf("first is second \n");
    }
    else
    {
        printf("Numbers are equal.");
    }
}