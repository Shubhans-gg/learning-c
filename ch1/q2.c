#include <stdio.h>
int main()
{
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    //c does not take powers as a**69 as in python you have to actually type a*a*a*a*a*a..... 69 times 
    //OR you can just #include <math.h> and use printf("%d", (int)pow(a, 69));
    printf("The cube of the no is %d", a*a*a);
    return 0;
}