#include <stdio.h>
int main(){
    int i = 1;
    while(i <= 4){          // outer loop — 4 rows
        int j = 1;
        while(j <= 5){      // inner loop — 5 stars per row
            printf("*");
            j++;
        }
        printf("\n");       // move to next line after each row
        i++;
    }
    return 0;
}
