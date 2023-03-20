#include<stdio.h>

// 1. Write a student structure and receive the data from the user for one student and display it.

struct student {
    char Name[25];
    int roll;
    float marks;
  }s;

int main (){
	
        printf("Enter  Name: ");
        scanf("%[^\n]s", s.Name);
        printf("Roll number:");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%f", &s.marks);
        printf("\n\tStudent Information\n\n");
        printf("Name : %s\n", s.Name);
        printf("Roll : %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
    

return 0;
}
