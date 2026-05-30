#include <stdio.h>
int main(){
    int n;
    printf("Enter the no of elements in the array:");
    scanf("%d", &n);
    int a[n], first, second;
    printf("Enter the elements of the array:");
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);}
    printf("Original array\n");
    for(int z=0; z<n; z++){
        printf("%d\t", a[z]);}
    for (int j=0; j<(n/2); j++){
        first=a[j];
        second=a[n-j-1];
        a[j]=second;
        a[n-j-1]=first;}
    printf("\nReversed array\n");
    for (int k=0;k<n; k++){
        printf("%d\t", a[k]);}
       
    }
    
    
