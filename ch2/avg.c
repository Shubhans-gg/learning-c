#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter first no:");
    scanf("%f", &a);
    printf("Enter second no:");
    scanf("%f", &b);
    printf("Enter third no:");
    scanf("%f", &c);
    float average = (a+b+c)/3 ;
    printf("The average is %f", average);
    return 0;
}