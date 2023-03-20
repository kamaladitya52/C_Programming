#include<stdio.h>

/* 5. Loan Amount	Interest rate	Deposit
    1000		  10		  300
*/ 
int main (){
 float l,r,d;
    printf("\nENTER LOAN AMOUNT: ");
    scanf("%f", &l);
    printf("\nENTER INTEREST RATE(PER ANNUM): ");
    scanf("%f", &r);
    printf("\nENTER DEPOSIT AMOUNT(PER ANNUM): ");
    scanf("%f", &d);
    int t=1;
    while(l>0){
        l= l + (r/100)*l - d;
        printf("\nLOAN AFTER YEAR %d:\t%.2f\n\n",t,l);
        t++;
    }
    printf("\n\nLOAN CLEARED!!!\n\n");

return 0;
}
