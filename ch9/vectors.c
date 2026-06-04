#include <stdio.h>
#include <string.h>

struct vec{
    int x;
    int y;
};
int main(){
    struct vec v1,v2;
    printf("Enter the first vector:");
    scanf("%di+%dj",&v1.x, &v1.y);
    printf("Enter the second vector:");
    scanf("%di+%dj",&v2.x, &v2.y);
    printf("The sum of the vectors is %di+ %dj", v1.x+v2.x, v1.y+v2.y);
}