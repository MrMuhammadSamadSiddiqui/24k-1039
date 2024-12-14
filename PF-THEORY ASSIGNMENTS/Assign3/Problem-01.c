#include <stdio.h>
#include <string.h>

struct dateofjoining{
		int day ;
		int month ;
		int year ;
	};
	
struct Employee {
	int employeecode ;
	char employeename[100];
	struct dateofjoining joining_date;
};

struct Employee employee[4];
void tenure (struct dateofjoining currentdate );
void current_date(struct Employee  employee[]);
void storingdata (){
	int i ;
	for (i=0;i<4;i++){
		printf ("\n\nEnter following details of employee %d : ",i+1);
		printf ("\n\n\t\tEnter employee code : ");
		scanf ("%d",&employee[i].employeecode);
		printf ("\n\t\tEnter employee name : ");
		gets (employee[i].employeename);
		gets (employee[i].employeename);
		printf ("\n\t\tEnter the day on which the employee joined ");
		scanf ("%d",&employee[i].joining_date.day);
		printf ("\n\t\tEnter the month in which the employee joined ");
		scanf ("%d",&employee[i].joining_date.month);
		printf ("\n\t\tEnter the year in which the employee joined ");
		scanf ("%d",&employee[i].joining_date.year);
	    
	}
	current_date(employee) ;
}
void current_date(struct Employee employee[]){
	struct dateofjoining currentdate;
	printf ("\nKindly input the current date : ");
	printf ("\nDAY: ");
	scanf ("%d",&currentdate.day);
	printf ("\nMONTH : ");
	scanf ("%d",&currentdate.month);
	printf ("\nYEAR :  ");
	scanf ("%d",&currentdate.year);
	tenure (currentdate );
}
void tenure (struct dateofjoining currentdate ){
	int date , month , years ;
	int period=0 ;
	int j = 0 ;
	int i = 0 ;
	printf ("\nPoeple who have more than 3 year tenure are  : ");
	for (i=0;i<=3;i++){
	date = (30-employee[i].joining_date.day)+currentdate.day;
	month = (12-employee[i].joining_date.month)+currentdate.month ;
	years = currentdate.year-1-employee[i].joining_date.year ;
	period = ((((date/30) + month))/12) + years;
	if (period >= 3){
		printf ("\n\nName : %s",employee[i].employeename);
		printf ("\nCode : %d",employee[i].employeecode);
		printf ("\nDate of joining  : %d %d %d ",employee[i].joining_date.day,employee[i].joining_date.month , employee[i].joining_date.year);
		j=j+1 ;
	}
	
}
    printf ("\nNumber of employee with more than 3 year tenure : %d ",j); 
}


int main (){
	storingdata ();
}