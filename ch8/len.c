#include <stdio.h>

int len(char arr[]);
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s", str);
    printf("The length of %s is %d", str, len(str));

}

int len(char arr[]){
    int count=0;
    for (int i=0; arr[i]!='\0'; i++){
        count ++;
    }
    return count;
}