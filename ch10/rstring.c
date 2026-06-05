#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("string.txt", "r");
    if(fptr == NULL){
        printf("File not found!");
        return 1;
    }
    char a[1000];

    while (fgets(a, sizeof(a), fptr) != NULL){
    printf("%s", a);  // ✅ already has newlines
}
    
    fclose(fptr);
}