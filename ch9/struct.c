#include <stdio.h>

struct student{
    int roll;
    char name[50];
    float gpa;};

int main(){
    struct student s1={65, "Shubhans", 7.6};
    printf("The roll no is %d\n", s1.roll);

    struct student *ptr=&s1;
    printf("The roll no is %d\n", (*ptr).roll);

    printf("The roll no is %d\n", ptr->roll);
    printf("The name is %s", ptr->name);

}