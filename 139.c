#include <stdio.h>

/* 7. Take a name having 3 words and display the position of space.
	(i.) present in the string.
		ABC BL TK\0
*/

int main(){
char a[20];
   int j,len,i;
    printf("Enter name of 3 words: ");
    scanf("%[^\n]s", a);
    for (j = 0; a[j]!='\0'; j++);
  len=j;
  len--;
  printf("Position of space is: ");
  for(i=0;i<=len;i++)
  {
      if (a[i]==' ')
      printf("%d S",i);
  }
    return 0;
}
