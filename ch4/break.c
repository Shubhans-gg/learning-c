#include <stdio.h>
int main(){
    int n;
    do {
        printf("Enter a no: ");
        scanf("%d",&n);
        printf("%d\n",n);

        
    }while (n%2==0);

    printf("You entered an odd no %d", n);
    return 0;
}