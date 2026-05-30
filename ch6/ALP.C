// Write a program in C to print all the letters in english
// alphabet using a pointer.
#include <stdio.h>
int main(){
    char a ='A';
    char z='Z';
    for (char i=a; i<=z; i++){
        printf("%c\t", i);
    }
}