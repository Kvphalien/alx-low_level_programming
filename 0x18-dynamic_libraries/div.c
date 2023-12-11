#include <stdio.h>

/**
 * divide two integers
 * int a : first int
 * int b : second int
 * return : final result
 */

int divide(int a, int b) 
{
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // or any other appropriate response when division by zero occurs
    }
}
