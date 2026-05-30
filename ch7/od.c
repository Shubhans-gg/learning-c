#include <stdio.h>
int main(){
    int ar[7];
    printf("Enter the elements of the array:");
    for(int i=0; i<7; i++){
        scanf("%d", &ar[i]);
    }
    int count=0;
    for (int z=0; z<7; z++){
        if (ar[z]%2!=0){
            count++;
        }
    }
    printf("There are %d odd nos in the array.", count);
}