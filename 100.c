#include<stdio.h>

//9. Display the binary of a decimal in array.

int main()
{
  int i,n,a[10];
  printf("Enter the Decimal value:");
  scanf("%d",&n);
  for(i=0;n!=0;i++)
  {
    a[i]=n%2;
    n=n/2;
  }
  n=i;
  printf("Binary Value:");
  for(i=0;i<n;i++)
  {
    printf("%d",a[n-i-1]);
  }
  printf("\n");
  return 0;
}
