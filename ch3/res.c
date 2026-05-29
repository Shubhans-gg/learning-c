#include <stdio.h>
int main(){
    float a ;
    printf("Enter your percentage: ");
    scanf("%f", &a);
    // if (a>30 && a<100){
    //     printf("Congrats!! You have passed the examination");
    // }
    // else if (a<=30 && a>=0) {printf("You have failed in the examination");}
    // else {printf("Enter valid percenatge");}

    //TERNARY CONDITON
    a>30? printf("PASS"): printf("FAIL");
    return 0;
}