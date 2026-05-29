#include <stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter the first no: ");
    scanf("%d", &a);
    printf("Enter the second no: ");
    scanf("%d", &b);

    int s=sum(a,b);
    printf("The sum is %d", s);
    return 0;}
int sum(int a,int b){
    return a+b;
}
