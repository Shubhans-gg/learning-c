#include <stdio.h>
#include <math.h>

int main(){
    double a;
    printf("Enter a no: ");
    scanf("%lf", &a);
    printf("The 69th power of %.2lf is %.2lf", a, pow(a, 69));
}