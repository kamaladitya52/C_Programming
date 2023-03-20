#include<stdio.h>

// 4. Take an empolyee structure (emp_id, emp_name, basic_salary, gross_salary) User Input:- DD,MM,YY

struct empolyee{
	int emp_id;
	char emp_name[100];
	int basic_salary;
	int dd;
	int mm;
	int yy;
};

int main (){

struct empolyee e[3];
	
	for(int j=0;j<3;j++){
	printf("Enter emp_id: ");
	scanf("%d",&e[j].emp_id);
	printf("Enter emp_name: ");
	scanf("%s",e[j].emp_name);
	printf("Enter basic_salary: ");
	scanf("%d",&e[j].basic_salary);
	printf("Enter Date of Birth:-\n");
	printf("Enter the Date: ");
        scanf("%d",&e[j].dd);
        printf("Enter the Month: ");
        scanf("%d",&e[j].mm);
        printf("Enter the Year: ");
        scanf("%d",&e[j].yy);
        printf("\n");
        }
        
        int age[3];
        for(int i=0;i<3;i++){
        age[i] = 2022-e[i].yy;
	}
	
        int gross_salary_[3];
        
        for(int k=0;k<3;k++){
	if(0<age[k]<30 ){
        gross_salary_[k] = e[k].basic_salary + e[k].basic_salary * 0.2;
        }
        if(30<=age[k]<50){
        gross_salary_[k]=e[k].basic_salary + e[k].basic_salary * 0.3;
        }
        if(age[k] >= 55){
        gross_salary_[k]=e[k].basic_salary + e[k].basic_salary * 0.4;
        }
        }
        
        printf("\n\tEmployee Information\n\n\n");
        
        for(int l=0;l<3;l++){
        printf("Employee id: %d\n",e[l].emp_id);
        printf("Name: %s\n",e[l].emp_name);
        printf("Age: %d\n",age[l]);
        printf("Basic Salary: %d\n",e[l].basic_salary);
        printf("Gross Salary: %d\n",gross_salary_[l]);
        printf("\n\n");
        }
	return 0;
}
