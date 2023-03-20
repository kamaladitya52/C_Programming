#include <stdio.h>

/*3.
 15 24 33 42 51
 17 26 35 44 53 62 71
*/

int main(){
int i;
for(i=15; i<52; i+=9)
{
  printf("%d ",i);	
}
printf("\n");
for(i=17; i<=72; i+=9)
{
  printf("%d ",i);	
}
printf("\n");
return 0;
}
