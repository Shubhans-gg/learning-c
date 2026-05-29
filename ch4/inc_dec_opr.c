#include <stdio.h>

int main() {
    // increment operators
    // i++ (post increment)
    // ++i (pre increment)

    int i=1;
    printf("%d \n", i++); //use, then increase the value by 1
    printf("%d \n", i);

    printf("%d \n", ++i); //increase the value of i by 1 then use it
    printf("%d \n", i);

    // decrement operators
    // i-- (post increment)
    // --i (pre increment)

    i=1;
    printf("%d \n", i--); //use, then decrease the value by 1
    printf("%d \n", i);

    printf("%d \n", --i); //decrease the value of i by 1 then use it
    printf("%d \n", i);

    return 0;
}
