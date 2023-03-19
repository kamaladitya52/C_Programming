#include<stdio.h>

// 2. FIND THE MAXIMUM AND MINIMUM AMONG 8 NUMBER. 

int main(){
int a,b,c,d,e,f,g,h,i,j;

printf("Enter the value a:");
scanf("%d",&a);

printf("Enter the value b:");
scanf("%d",&b);

printf("Enter the value c:");
scanf("%d",&c);

printf("Enter the value d:");
scanf("%d",&d);

printf("Enter the value e:");
scanf("%d",&e);

printf("Enter the value f:");
scanf("%d",&f);

printf("Enter the value g:");
scanf("%d",&g);

printf("Enter the value h:");
scanf("%d",&h);



i=(a>b && a>c && a>d && a>e && a>f && a>g && a>h)?a:((b>c && b>d && b>e && b>f && b>g && b>h)?b:(c>d && c>e && c>f && c>g && c>h)?c:(d>e && d>f && d>g && d>h)?d:( e>f && e>g && e>h)?e:(f>g && f>h)?f:(g>h?g:h));


j=(a<b && a<c && a<d && a<e && a<f && a<g && a<h)?a:((b<c && b<d && b<e && b<f && b<g && b<h)?b:(c<d && c<e && c<f && c<g && c<h)?c:(d<e && d<f && d<g && d<h)?d:( e<f && e<g && e<h)?e:(f<g && f<h)?f:(g<h?g:h));

printf("Maximum among a,b,c,d,e,f,g, and h is %d\n",i);
printf("Minimum among a,b,c,d,e,f,g and h is %d\n",j);

return 0;
}
