#include<stdio.h>

/*  5. Take 3 items price and prepare a bill.
	ip>=5000	40% Discount. 
	ip>=300	20% Discount.
	ip>=100	5%  Discount.
	Total > 10000	then Extra 5 % Discount.
*/
int main (){
int a,b,c,A,B,C;
printf("Enter Item 1 Price:");
scanf("%d", &a);

printf("Enter Item 2 Price:");
scanf("%d", &b);


printf("Enter Item 3 Price:");
scanf("%d", &c);

printf("\n\nName of Items \t   Original Price \t 	After Discount Price \n");
// Item 1: 40% Discount
	if (a>=5000){
	A=a*60/100;
	 printf("\nItem 1:\t\t\t %d \t\t\t\t %d \n",a, A);
	}else
	{
	A=a;
	printf("\nItem 1:\t\t\t %d \t\t\t\t %d \n",a, a);
	}

// Item 2: 20% Discount
	if (b>=300){
	B=b*80/100;
	printf("Item 2:\t\t\t %d \t\t\t\t %d \n",b,B );
	}else
	{
	B=b;
	printf("Item 2:\t\t\t %d \t\t\t\t %d \n",b, b);
	}
// Item 3: 5% Discount
	if (c>=100){
	C=c*95/100;
	printf("Item 3:\t\t\t %d \t\t\t\t %d \n\n",c,C);
	}else
	{
	C=c;
	printf("Item 3:\t\t\t %d \t\t\t\t %d \n\n",c,c);
	}
int t,s;
t=A+B+C;
	if (t>10000){
	// Total: 5% Discount
	t=A+B+C;
	printf("Total After Extra Discount = %d\n",t*95/100);
	}else
	{
	s=A+B+C;
	printf("Total = %d\n",s);
	}	
return 0;
}
