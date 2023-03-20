#include<stdio.h>

// 6. Display a Calendar of the month January,2021.

int main (){

    int k, rmd;

    printf("     January 2021\n");
    printf(" Su Mo Tu We Th Fr Sa\n");

    for(k = 1; k < 32; ++k) {
         if(k == 1){
             printf("                   %2d\n", k); 
         }
         else if(k % 7 == 1) {
             printf(" %2d\n", k);
         }
         else {
             printf(" %2d", k);
         }
    }
    return 0;
}
