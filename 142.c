#include <stdio.h>

/* 10. Take a name
	ABP kyL tv\0
	Abp Kyl TV\0
*/
int main(){
char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            if ((int)str[i+1]>90){
                str[i+1]=str[i+1]-32;
            }
        }
        else{
            if ((int)str[i+1]<90){
                if(str[i+1]!=' '){
                str[i+1]=str[i+1]+32;}
            }
        }
    }
    printf("The required string is ");
    printf("%s",str);
    return 0;
}
