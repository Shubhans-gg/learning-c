#include <stdio.h>
int i=1;
void table(int a);

int main(){
    int a;
    printf("Enter a no: ");
    scanf("%d", &a);
    table(a);
    return 0;}

void table(int a){
    
    if(i>=11){
        return;}
    printf("%dX%d=%d\n", a, i, a*i);
    i++;
    table(a);
}
