#include <stdio.h>
// 5. THREE ITEMS BILL AFTER DISCOUNT
int main(){

int a,b,c;
printf("Enter Item 1 Price:");
scanf("%d", &a);

printf("Enter Item 2 Price:");
scanf("%d", &b);


printf("Enter Item 3 Price:");
scanf("%d", &c);

printf("\n\nName of Items \t   Original Price \t 	After Discount Price \n");
// Item 1: 20% Discount 
printf("\nItem 1:\t\t\t %d \t\t\t\t %d \n",a, a*80/100);

// Item 2: 30% Discount
printf("Item 2:\t\t\t %d \t\t\t\t %d \n",b, b*70/100);

// Item 3: 0% Discount
printf("Item 3:\t\t\t %d \t\t\t\t %d \n\n",c,c);

int t;
t=a*0.8+b*0.7+c;

// Total: 40% Discount
printf("Total :\t\t\t %d \t\t\t\t %d \n\n\n",a+b+c,t);

printf("\t\t\t      Final Amount to pay: %d \n\n\n",t*60/100);



return 0;
}

