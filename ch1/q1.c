#include <stdio.h>
int main(){
    float a,b;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    printf("The perimeter of the rectangle is %f", 2*(a+b));

    return 0;
}