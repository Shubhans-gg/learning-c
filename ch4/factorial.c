#include <stdio.h>
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    
    int factorial=1;
    for(int i =n; i>=1 ; i--){
        factorial= factorial*i;
        if (n==0){
            factorial=1;}}
    
    printf("The factorial of %d is %d \n", n, factorial);
    return 0;}
