#include <stdio.h>
int main(){
    char str[100]; 
    int freq[256]={0};
    printf("Enter a string:");
    fgets(str,sizeof(str), stdin);

    for(int i=0; str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    int max=0;
    char maxChar;
    for(int j=0; j<256; j++){
        if (freq[j]>max){
            max=freq[j];
            maxChar=(char)j;
        }
    }
    printf("The most repeated character is %c (%d times)", maxChar, max);

}