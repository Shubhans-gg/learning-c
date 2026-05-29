#include <stdio.h>
int i=0;
int sum_dig(int n);

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d", n , sum_dig(n));
    return 0;
}

int sum_dig(int n){
    if(n == 0) return 0;
    return (n % 10) + sum_dig(n / 10);
}
