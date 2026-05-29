#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch );

    // all the characters have a integer value to them

    if (ch>='a' && ch<='z'){
        printf("Lower case");}

    else if(ch>='A' && ch<'Z'){
        printf("Upper case");}

    else {printf("This is not an english character");}
    
    return 0;}
