#include <stdio.h>
int main(){
    // char str[]="Hello World";  //cannot be changed
    // puts(str);
    // str="Hello";
    // puts(str);
 
    char *str="Hello World";  //can be changed
    puts(str);
    str="Hello";  
    puts(str);
}