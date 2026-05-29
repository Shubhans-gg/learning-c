#include <stdio.h>

void value(float a);

int main(){
    float a=100;
    value(a);
    printf("Final value=%f\n", a);
}

void value(float a){
    a=a+0.18*a;
    printf("Final value=%f\n", a);
}