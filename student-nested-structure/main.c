//
//  main.c
//  student-nested-structure
//
//  Created by Peter Rodriguez.
//
/*
 Uses the struct for person and student to list student information.

 
 */
#include <stdio.h>

int main() {
  
    struct person
    {
    char name[20];
    int age;
    char dob[10];
    };

    struct student
    {
    struct person info;
    int roll_no;
    float marks;
    char dep_name[50];
    int years;
        
    };
    struct student s1;
    
    printf("Enter your name: ");
    scanf("%s", s1.info.name);
    printf("Enter your age: ");
    scanf("%d", &s1.info.age);
    printf("Enter your DOB: ");
    scanf("%s", s1.info.dob);
    printf("Enter your roll: ");
    scanf("%d", &s1.roll_no);
    printf("Enter your Department: ");
    scanf("%s", s1.dep_name);
    printf("Enter number of years in College: ");
    scanf("%d", &s1.years);
    
    printf("\nDispaying Information");
    printf("\nName: %s", s1.info.name);
    printf("\nAge: %d", s1.info.age);
    printf("\nDOB: %s", s1.info.dob);
    printf("\nRoll num: %d", s1.roll_no);
    printf("\nDepartment: %s", s1.dep_name);
    printf("\nYears: %d", s1.years);
    
    printf("\n");
        
    return 0;
}
