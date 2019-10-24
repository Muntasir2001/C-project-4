#include <stdio.h>

int main () 
{
    int a, b;

    printf("Input two numbers \n");
    scanf("%d %d", &a, &b);
    b *= a;
    printf("a is %d, b is %d \n", a, b);

    int c = 10 + 10 * 20 - 10 / 5 + 15 / 5 + 5 * 0;
    printf("%d \n", c);
    
    return 0;
}