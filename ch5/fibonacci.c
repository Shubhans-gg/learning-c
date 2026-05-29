#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("Fibonacci of %d is %d", n, fib(n));
    return 0;
}

int fib(int n){
    if (n==0){return 0;}
    else if(n==1){return 1;}
    
    return fib(n-1)+fib(n-2);
}