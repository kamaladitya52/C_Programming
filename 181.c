#include<stdio.h>

// 1. Take a student struct (roll,name,marks[3],CGPA,avg). 

struct student{
    int roll;
    char name[20];
    int marks [3];
};
struct res{
    float cgpa;
    int avg;
};
struct res f(struct student p){
    struct res q;
    q.avg=(p.marks[0]+p.marks[1]+p.marks[2])/3;
     printf("Average is %d\n",q.avg);
     q.cgpa= q.avg/10.0;
     printf("CGPA is %.1f\n",q.cgpa);
    return q;
};

int main(){
    struct student s;
    printf("Enter the roll: ");
    scanf("%d",&s.roll);
    printf("Enter the name: ");
    scanf("%s",s.name);
    printf("Enter the marks: ");
    scanf("%d",&s.marks[0]);
    printf("Enter the marks: ");
    scanf("%d",&s.marks[1]);
    printf("Enter the marks: ");
    scanf("%d",&s.marks[2]);
    
    struct res t;
    t=f(s);

return 0;
}
