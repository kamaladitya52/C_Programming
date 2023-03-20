#include<stdio.h>

//2. Increasing Sequence

int main (){
int arr1[100];
   int n, i, j, tmp;

   printf("Enter the size of array : ");
   scanf("%d", &n);

   printf("Enter %d elements in the array :\n", n);
   for (i = 0; i < n; i++)
   {
      printf("arr[%d]:",i);
      scanf("%d", &arr1[i]);
   }

   for (i = 0; i < n; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (arr1[j] < arr1[i])
         {
            tmp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = tmp;
         }
      }
   }
   printf("Elements of array in Increasing sequence: ");
   for (i = 0; i < n; i++)
   {
      printf("%d  ", arr1[i]);
   }
   printf("\n");

return 0;
}
