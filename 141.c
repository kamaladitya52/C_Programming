#include <stdio.h>

// 9. A----->	ABC KT mn\0 
//    B----->	CBA TK nm\0

int main(){
char str[100];
    int start=0,temp,end=0,length=0;
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
 
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==' '){
            end=i-end;

            for (int x=0, j=start,k=i-1;x<end/2;j++,k--,x++){
                temp=str[j];
                str[j]=str[k];
                str[k]=temp;
            }
            start=i+1;
        }
        length++;
    }

    for (int x=0, i=start, j=length-1;x<(length-start)/2;i++,j--,x++){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    printf("%s",str);
    return 0;
}
