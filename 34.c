#include<stdio.h>

// 1.Display the week days based on user input.

int main (){
int day;
printf("Enter the day number: ");
scanf("%d",&day);

switch (day)
	{
	  case 1 : printf("SUNDAY \n");
	  	  break;
	  case 2 : printf("MONDAY \n");
	  	  break;
	  case 3 : printf("TUESDAY \n");
	  	  break;
	  case 4 : printf("WEDNESDAY \n");
	  	  break;
	  case 5 : printf("THURSDAY \n");
	          break;
	  case 6 : printf("FRIDAY \n");
	  	  break;
	  case 7 : printf("SATURDAY \n");
	  	  break;
	  }
return 0;
}
