#include<stdio.h>

// 2. Write a student struct(roll,marks(3),cgpa). User will given roll no. and marks.

struct student {
    int roll;
    int mark[3];
    float cgpa;
};

int main (){
    struct student s;
    printf("Enter roll no. ");
    scanf("%d",&s.roll);
    for (int i=0;i<3;i++){
        printf("Marks %d:",i+1);
        scanf("%d",&s.mark[i]);
    }
    int sum=0;
    
    for (int i=0;i<3;i++){
        sum+=s.mark[i];
    }

    s.cgpa=(sum/100.0)*3;
    printf("CGPA: %.1f\n",s.cgpa);
    return 0;
}
