#include <stdio.h>

// 8. Pass a string to an array which will replace multiple continuous spaces with only one space.

int main()
{
   char str[100], res[100], j = 0;
 
   printf("Enter a string:");
   scanf("%[^\n]s",str);
 
   for (int i=0;str[i] != '\0';i++)
   {
      if ((str[i] == ' ' && str[i+1] == ' ') != 1) {
        res[j] = str[i];
        j++;
      }
   }
   
   res[j] = '\0';
   printf("After replacing spaces with single space:%s\n", res);
   return 0;
}
