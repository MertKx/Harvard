#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string first= get_string("What is your name? ");
    string second= get_string("What is your surname? ");
    printf("Hello, %s %s \n", first , second);
}