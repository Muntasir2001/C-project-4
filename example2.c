//A program for testing bitwise operators...

#include  <stdio.h>

int main () 
{
    int a;
    int b;
    int c;

    printf("Input value of a \n");
    scanf("%d", &a);
    printf("Input value of b \n");
    scanf("%d", &b);

    c = a & b;
    printf("a & b would be %d \n", c);

    c = a | b;
    printf("a | b would be %d \n", c);

    c = a^b;
    printf("a XOR b is %d \n", c);

    c = ~a;
    printf("a NOT would be %d \n", c);

    c = b<<3;
    printf("Result of shifting b left by 3 position would be %d \n", c);

    return 0;
}