#include <stdio.h>

// 4. Take a string and store the same string into another array.
//   a---->	A B C D \0
//   b---->	A B C D \0

int main(){

 char a[10], b[100], i;
  printf("Enter string a: ");
  fgets(a, sizeof(a), stdin);

  for (i = 0; a[i] != '\0'; ++i)
  {
    b[i] = a[i];
  }

  b[i] = '\0';
  printf("String b: %s", b);
    return 0;
}
