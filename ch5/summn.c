#include <stdio.h>
int i=1;
int s=0;

void sum(int n);

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);
    sum(n);
    return 0;}

void sum(int n){
    if(i>=n+1){
        printf("The sum of first %d natural numbers is %d", n, s);
        return;}
    s=s+i;
    i++;
    sum(n);
}
