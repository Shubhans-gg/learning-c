#include <stdio.h>
int main(){
    int a;
    printf("Enter any no: ");
    scanf("%d",&a);
    printf("%d", a>99 && a<999);
    return 0;
}