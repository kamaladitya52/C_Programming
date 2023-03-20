#include <stdio.h>

// 1. 2 9  6 4 5 7 8 90 3
//    3 90 8 7 5 4 6 9  2

int main()
{
   int i,n,a[100];
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("The values store into the array are :");
   for(i=0;i<n;i++)
     {
	   printf("% 3d",a[i]);
	 }
 
   printf("\nThe values store into the array in reverse order are:");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 3d",a[i]);
	  }
   printf("\n");
   return 0;
}
