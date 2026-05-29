#include <stdio.h>
int main(){
    int a,b;
    printf("Enter any no: ");
    scanf("%d", &a);
    b=a%2;
    printf("%d", b==0); 
    return 0;                                        
}