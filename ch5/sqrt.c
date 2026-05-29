#include <stdio.h>
// DEKHO MUJE YE VALE KA LOGIC JADA SAMAJ NAHI AYA TO MAINE BAS CLAUDE SE CHAP LIYA HAI ;)
float square_root(float n);

int main(){
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    printf("Square root of %.2f is %.3f", n, square_root(n));
    return 0;
}
// BTW IS METHOD KO BABYLONIAN METHOD KEHTE HAI 
//It finds ROOT OF N by initializing a guess , then calculating (guess + n / guess) / 2 until the desired accuracy is reached.
 
float square_root(float n){
    float guess = n / 2;
    float epsilon = 0.0001;  // how accurate we want to be
    
    while((guess * guess - n) > epsilon || (n - guess * guess) > epsilon){
        guess = (guess + n / guess) / 2;
    }
    return guess;
}