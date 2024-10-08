#include <stdio.h>
int main(){
	int age; 
	printf ("This program will tell you in which category a person age lies\n");
	printf ("Please input the person's age : ");
	scanf  ("%d",&age);
	if (age>0){
		if (age<13){
			printf  (" Child ");
		}
		else if (age>12){
			if (age<20){
				printf ("Teenager");
			}
			else if (age<60){
				printf ("Adult");
			}
			else if (age>59){
				printf  ("Senior");
			}
			
		}
	}
	else {
		printf ("Please input correct age ");
	} 

}
