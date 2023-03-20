#include<stdio.h>

// 4. Take a principle amount, interset rate and withdraw amount.

int main (){
float p,r,w;
    printf("\nENTER PRINCIPAL AMOUNT: ");
    scanf("%f", &p);
    printf("\nENTER INTEREST RATE(PER ANNUM): ");
    scanf("%f", &r);
    printf("\nENTER WITHDRAWAL AMOUNT(PER ANNUM): ");
    scanf("%f", &w);
    int t=1;
    while(p>w){
        p= p + (r/100)*p - w;
        printf("\nBALANCE AFTER YEAR %d:\t%.2f\n\n",t,p);
        t++;
    }
    printf("\n\nINSUFFICIENT BALANCE!!!\n\n");


return 0;
}
