#include<stdio.h>

/*10. 
	*
	* *
	*  *
	*   *
	* * * *			
*/

int main (){
int i,j,n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=n;j++)
    {
      if(j==1||i==n||j==i)
      {
        printf(" *");
      }
      else
        printf("  ");
    }
  }
printf("\n");
return 0;
}
