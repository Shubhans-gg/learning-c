#include <stdio.h>
#include <stdlib.h>

int main(){
    int garbage_count = 0;
    
    for(int run = 1; run <= 1000; run++){
        float *ptr = (float*)malloc(5*sizeof(float));
        
        // Check if any value is NOT 0.0
        int has_garbage = 0;
        for(int i = 0; i < 5; i++){
            if(ptr[i] != 0.0){
                has_garbage = 1;
                garbage_count++;
                printf("Run %d: Got garbage! ptr[%d] = %f\n", run, i, ptr[i]);
                break;
            }
        }
        
        free(ptr);  // ✅ always free!
    }
    
    printf("\n--- Results ---\n");
    printf("Out of 1000 runs, got garbage %d times\n", garbage_count);
    
    return 0;
}