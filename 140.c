#include <stdio.h>

// 8. Display only the middle word present in the above string.

int main(){
 char a[60], b[60];
   int j,len,i,low,high,k,l;
    printf("Enter name of 3 words: ");
    scanf("%[^\n]s", a);
    for (j = 0; a[j]!='\0'; j++);
  len=j;
  len--;
  for (i=0;i<=len;i++)
  {
      if (a[i]==' ')
      
      break;
     
  }
  low=i;

  for (k=low+1;k<=len;k++)
  {
      if (a[k]==' ')
      break;
  }
  high=k;
  printf("The middle word is: ");
  for(l=low+1;l<high;l++)
  {
      printf("%c" ,a[l]);
  }
    return 0;
}
