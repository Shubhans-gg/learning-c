#include <stdio.h>
int main(){
    float prices[5];
    float total =0;
    printf("Enter the price of the items:");
    for(int i=0; i<=4;i++){scanf("%f", &prices[i]);
        total=total+prices[i];}
    printf("Grand Total=%f", total+(total*0.18));

}