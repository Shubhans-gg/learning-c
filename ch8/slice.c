#include <stdio.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("Sliced string-");
    for (int i=3; i<=10; i++){
        printf("%c", str[i]);
    }
}