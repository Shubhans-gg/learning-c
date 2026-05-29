#include <stdio.h>
int main(){
    float n;
    int r;
    int p=0;
    printf("Enter a no:");
    scanf("%f", &n);
    float a = n;
    int y=n;

    float x=y;
    if (x!=n){printf("Invalid input!!");}
     
    else{
    while(y!=0){r=y%10;
        p=p*10+r;
        y=y/10;}
    
    if ((a==p) && (a>=0)){printf("%d is a palindrome",y );}
    else {printf("%d is not a palindrome",y );}}
    return 0;}
