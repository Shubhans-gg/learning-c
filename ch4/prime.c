#include <stdio.h>
int main(){
    int n,i;
    int prime=1;
    printf("Enter a no: ");
    scanf("%d", &n);

    for(i=2; i<=n-1;i++){
        if (n%i==0){
            prime=0;
            break;}}
    if (prime==0){
        printf("%d is not a prime no", n);}
    else{printf("%d is a prime no", n);}
    
    return 0;
    }
