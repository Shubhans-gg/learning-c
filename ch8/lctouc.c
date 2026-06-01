#include <stdio.h>
int main(){
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    for(int i=0; a[i] != '\0'; i++){
        switch(a[i]){
            case 'a':a[i]='A';  break;
            case 'e':a[i]='E';  break;
            case 'i':a[i]='I';  break;
            case 'o':a[i]='O';  break;
            case 'u':a[i]='U';  break;}
        }
    printf("%s", a);
}