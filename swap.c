#include<stdio.h>
int main(){
    int a,b;
    printf("Enter numbers to be swapped:");
    scanf("%d%d", &a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("First no=%d\n", a);
    printf("Second no=%d", b);
    
    return 0;

}