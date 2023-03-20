#include <stdio.h>

// 3.  2 9 6 8 4 7
// Output:-     6 9 2 7 4 8	

int main(){
 int a[6], i, j, Size;

   // printf("Please Enter the size of an array: ");
   // scanf("%d", &Size);
	
	Size=6;

    for (i = 0; i < Size; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
    }

   for(i=2;i>=0;--i)
  {
    printf("%d ",a[i]);
  }
   for(i=5;i>=3;--i)
  {
    printf("%d ",a[i]);
  }
printf("\n");  
    return 0;
}
