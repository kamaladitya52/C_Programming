#include<stdio.h>

// 5. Take a date of birth as string and  store 

struct DOB
{
    char dd[3];
    char mm[3];
    char yyyy[5];
};
int main()
{
    struct DOB d1;
    char date[15];
   printf("Enter the date (DD/MM/YYYY): ");
   scanf("%[^\n]s",date);
    d1.dd[0]=date[0];
    d1.dd[1]=date[1];
    d1.dd[2]='\0';
    d1.mm[0]=date[3];
    d1.mm[1]=date[4];
    d1.mm[2]='\0';
    d1.yyyy[0]=date[6];
    d1.yyyy[1]=date[7];
    d1.yyyy[2]=date[8];
    d1.yyyy[3]=date[9];
    d1.yyyy[4]='\0';
    printf("\n\tDate of Birth: %s-%s-%s\n\n",d1.dd,d1.mm,d1.yyyy);
    return 0;
}
