//Mathematics using arithmetic, relational and logical operators.

#include <stdio.h>

int main () 
{
    int a = 12, result;

    printf("Initial value of a = %d \n", a);

    //result of the logical expression stored in the result..
    result = (a == 13) && a++;
    printf("Final value of a is %d \n", a); //the final result of a will only increase by one if the result of the "result" is TRUE (1), or else there will be no effect on a...
    printf("Result of the logical expression is %d \n", result); 
    
    return 0;
}