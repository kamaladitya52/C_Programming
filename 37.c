#include<stdio.h>

// 4. Take a date of an year and also take the day of 1st January of Same Year. Then Display the day of given date.

int main (){
int dd,mm,yy,day,nd;
printf("Enter the date (in dd/mm/yy):");
scanf("%d/%d/%d", &dd,&mm,&yy);
printf("Tell the day of 1st January:");
scanf("%d",&day);
	nd=0;   // nd = No. of days.
switch (mm-1)
{
	case 11 : nd+=30;
	case 10 : nd+=31;
	case 9 : nd+=30;
	case 8 : nd+=31;
	case 7 : nd+=31;
	case 6 : nd+=30;
	case 5 : nd+=31;
	case 4 : nd+=30;
	case 3 : nd+=31;
	case 2 : nd+=28;
	case 1 : nd+=31;
}
printf("Day of 1st January is ");
switch(day)  
    {  
        case 1: printf("Sunday.\n");  
                break;  
        case 2: printf("Monday.\n");  
                break;  
        case 3: printf("Tuesday.\n");  
                break;  
        case 4: printf("Wednesday.\n");  
                break;  
        case 5: printf("Thursday.\n");  
                break;  
        case 6: printf("Friday.\n");  
                break;  
        case 7: printf("Saturday.\n");  
                break;  
        
    }  
	nd+=dd;
	int D = (nd + day -1)%7;
printf("Required Day of input date is ");
switch(D)  
    {  
        case 1: printf("Sunday.\n");  
                break;  
        case 2: printf("Monday.\n");  
                break;  
        case 3: printf("Tuesday.\n");  
                break;  
        case 4: printf("Wednesday.\n");  
                break;  
        case 5: printf("Thursday.\n");  
                break;  
        case 6: printf("Friday.\n");  
                break;  
        case 7: printf("Saturday.\n");  
                break;  
    }	
return 0;
}
