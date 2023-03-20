#include<stdio.h>

// 4. Find all the leap years between two given years,

int main (){
	int startYear, endYear, i;
	printf("Enter Start year: ");
   	scanf("%d", &startYear);
 
	printf("Enter End year: ");
   	scanf("%d", &endYear);
   	printf("Leap years between two given years are:- \n");
	i=startYear;
	while (i <= endYear)
	{
		if( (0 == i % 4) && (0 != i % 100) || (0 == i % 400) )
		{
			printf("%d\n", i);
		}
		i++;
	}

return 0;
}
