#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    int n;
    printf("Enter a no:");
    scanf("%d", &n);
    // ptr=(float*)malloc(n*sizeof(float));
    ptr=(float*)calloc(n,sizeof(float));
    for (int i=0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    free(ptr);
}