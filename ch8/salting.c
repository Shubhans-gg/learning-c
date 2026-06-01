#include <stdio.h>
#include <string.h>

int main(){
    char pass[100],salt[5]="123";
    printf("Enetr you password:");
    scanf("%s", pass);
    strcat(pass, salt);
    printf("Salted Password=%s", pass);
}