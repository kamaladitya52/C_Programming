#include<stdio.h>

// 3. Take a date structure. Take two dates as input and find out the difference between two dates (diff. in Year).

struct date{
    int dd;
    int mm;
    int yy;
};

int main (){
    struct date s1;
    struct date s2;
    printf("Enter Date: ");
    scanf("%d",&s1.dd);
    printf("Enter Month: ");
    scanf("%d",&s1.mm);
    printf("Enter Year 1: ");
    scanf("%d",&s1.yy);
    printf("Enter Date: ");
    scanf("%d",&s2.dd);
    printf("Enter Month: ");
    scanf("%d",&s2.mm);
    printf("Enter Year 2: ");
    scanf("%d",&s2.yy);

    int diff;
    if(s2.yy > s1.yy){
    diff = s2.yy-s1.yy;
    }
    if(s2.yy < s1.yy){
    diff = s1.yy-s2.yy;
    }
    printf("Difference between Years is %d\n",diff);
    return 0;
}
