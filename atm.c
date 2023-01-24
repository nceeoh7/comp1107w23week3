#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>

int main()
{
    //How to ask for the amount of money to dispense
    int i = get_int("Use me to ask for money\n");
    printf("You asked for $%d\n", i);

    //get_string() will help you get a name
    //get_char() is a good way to ask if the machine should keep dispensing.
    
    return 0;
}