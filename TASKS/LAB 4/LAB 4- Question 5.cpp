#include <stdio.h>
int main (){
	int id ;
	int units ;
	float ammount ;
	float surcharge ;
	float net ;
	
	printf ("\tElectrcity bill calculator\t\n");
	printf ("Kindly input your customer ID :");
	scanf (" %d",&id);
	printf ("\nKindly input the units you have consumed : ");
	scanf (" %d",&units);
	printf ("Customer id: %d \nUnits consumed : %d\n",id,units);
	if (units<=199){
		ammount=16.20*units ;
		printf ("Ammount charges @Rs 16.20 per unit : %.2f\n ",ammount);	}
	else if (units>199 && units<300 ){
		ammount=20.10*units ;
		printf ("Ammount charges @Rs 20.10 per unit : %.2f\n ",ammount);
	}
	else if (units>=300 && units<500){
		ammount=27.10*units ;
		printf ("Ammount charges @Rs 27.10 per unit : %.2f\n ",ammount);
	}
	else if (units>=500){
		ammount=35.90*units ;
		printf ("Ammount charges @Rs 35.90 per unit : %.2f\n ",ammount);
	}
	
	if (ammount>18000){
		surcharge=0.15*ammount ;
	}
	else {
		surcharge==0;
	} 
	
	net=ammount+surcharge;
	printf ("Surcharge Ammount : %.2f\nNet Ammount Paid by the Customer :%.2f",surcharge,net);
	
}
