#include <stdio.h>
int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int sum=0;
    int i=1;
    do {sum=sum+i;
         i++;}
     while (i<=n);
    printf("%d", sum);
    return 0;
}