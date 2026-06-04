#include <stdio.h>
#include <string.h>

struct add{
    int house_no;
    char block;
    char city[50];
    char state[50];}pp[5];

int main(){
    for (int i=0;i<5; i++ ){
        printf("\nEnter address of person no %d:\n", i+1);
        printf("Enter house no:");
        scanf("%d", &pp[i].house_no);
        printf("\nEnter block:");
        scanf(" %c", &pp[i].block);
        printf("\nEnter city name:");
        scanf("%s", pp[i].city);
        printf("\nEnter state name:");
        scanf("%s", pp[i].state);
    }
    for (int i=0;i<5; i++ ){
        printf("Adress of %d person:\nHouse no %d, Block %c, %s, %s\n",i+1,pp[i].house_no,pp[i].block , pp[i].city,pp[i].state);}

}