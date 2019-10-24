#include <stdio.h>

int main () 
{
    float a = 5;
    float b = 0;
    float c = c;

    //AND operator
    //This is how it works. When its true, it selects and displays the first option. When its false, it selects and displays the second option

    c = a && b;
    printf("a=5 while b=0, a AND b is %s \n", c?"True":"False");

    c = a || b;
    printf("a=5 while b=0, a OR b is %s \n", c?"True":"False");

    c = a == b;
    printf("a == b is %s \n", c?"True":"False");

    c = a >= b;
    printf("a >= b is %s \n", c?"True":"False");

    c = a <= b;
    printf("a <= b is %s \n", c?"True":"False");
    
    return 0;
}