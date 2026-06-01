//Took help from AI

#include <stdio.h>

int check(char a[]);

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(check(str) == 1)
        printf("S was found");
    else
        printf("S was not found");
    return 0;
}

int check(char a[]){
    for(int i=0; a[i] != '\0'; i++){
        if(a[i] == 's' || a[i] == 'S'){
            return 1;  // found it!
            //return fxn exits the loop and the fxn both so there is no use of using break after return
        }
    }
    return 0;  //Will reach here only if there was no s found in the loop
               //✅ only returns 0 after checking ALL characters
}