//lets try all of the special operators (last example of tutorial 4)

#include <stdio.h>

int main ()
{
    int a;
    a = 10;

    a += 4;
    printf("Result of ex1 is: %d \n", a);

    a *= 4;
    printf("Result of ex2 is: %d \n", a);

    a /= 4;
    printf("Result of ex3 is: %d \n", a);

    a %=4;
    printf("Result of ex4 is: %d \n", a);

    return 0;
}