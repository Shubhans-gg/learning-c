#include <stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("student.txt","w");
    char name[50];
    int age;
    float gpa;
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your gpa:");
    scanf("%f", &gpa);
    fprintf(fptr,"%s\t", name);
    fprintf(fptr,"%d\t", age);
    fprintf(fptr,"%f\t", gpa);
    fclose(fptr);
}