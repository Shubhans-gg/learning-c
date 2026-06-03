#include <stdio.h>

int main(){
    char a[100];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    for(int i=0; a[i]!='\0'; i++){
        if (a[i]==' '){
            for (int j=i; a[j]!='\0'; j++){
                a[j]=a[j+1];
            }
            i--;
        }
    }
    printf("%s" , a);
}
