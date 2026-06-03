#include <stdio.h>
#include <string.h>

typedef struct student{
    int roll;
    char name[50];
    float gpa;
}std;
int main(){
    std s1, s2;
    s1.roll=43;
    strcpy(s2.name,"Shubh");
    printf("%s", s2.name);

}