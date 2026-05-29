#include <stdio.h>
int a;
char b,city[20], state[20];

void address();
int main(){
    for(int i=1; i<=5; i++){
            address();
    }

    return 0;}

void address(){
    printf("Enter your house no: ");
    scanf("%d", &a);
    printf("Enter your block: ");
    scanf(" %c", & b);
    printf("Enter your city: ");
    scanf(" %s", & city);
    printf("Enter your state: ");
    scanf(" %s", & state);
    printf("/nYour address:House %d, Block %c, %s, %s\n", a,b,city, state);

}