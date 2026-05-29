#include <stdio.h>
int max(int *x, int *y);

int main(){
    int a, b;
    printf("Enter two nos:");
    scanf("%d %d", &a, &b);
    int result=max(&a , &b);
    if (result==-1){printf("Both the nos are equal.");}
    else printf("The larger no is %d", max(&a , &b));
    }

int max(int *x, int *y){
    if (*x>*y){return *x;}
    else if (*x<*y){return *y;}
    else return -1;

}