#include <stdlib.h>
#include <stdio.h>
#include "headers/headerFile1.h"

extern void function_two();
extern void function_three();

int main()
{
    printf("This is Main File.");
    function_two();
    function_three();
    exit (EXIT_SUCCESS);
}
