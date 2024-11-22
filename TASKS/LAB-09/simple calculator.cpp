#include <stdio.h>
float addition(float a , float b ){
	float  c= a + b ;
	return c ; 
} 
float multiplication (float a , float b){
	float c =a*b;
	return c ;
}
float division(float a , float b ){
	float c= a/b ;
	return c ; 
} 
float substraction(float a , float b ){
	float c= a - b ;
	return c ; 
} 
int main (){
	printf ("\t\t\t\tBASIC CALCULATOR\n");
	char d  ; 
	float a,b ;
	float e ; 
	printf ("Input operator of the operation you want to perform : ");
	scanf (" %c",&d);
	if  (d=='*'){
		printf ("Kindly input number 1 : ");
		scanf ("%f",&a);
		printf ("Kindly input number 2 : ");
		scanf ("%f",&b);
		e=multiplication (a,b);
		printf  ("The product of %.2f and %.2f : %.2f",a,b,e);
		
	}
	
	else if  (d=='+'){
		printf ("Kindly input number 1 : ");
		scanf ("%f",&a);
		printf ("Kindly input number 2 : ");
		scanf ("%f",&b);
		e=addition (a,b);
		printf  ("The sum of %.2f and %.2f : %.2f",a,b,e);

}

   	else if  (d=='-'){
   		printf ("number 1 - number 2\n");
		printf ("Kindly input number 1 : ");
		scanf ("%f",&a);
		printf ("\nKindly input number 2 : ");
		scanf ("%f",&b);
		e=substraction (a,b);
		printf  ("The difference of %.2f from %.2f : %.2f",b,a,e);
	}
	
	else if  (d=='/'){
   		
		printf ("Kindly input numerator : ");
		scanf ("%f",&a);
		printf ("Kindly input denominator : ");
		scanf ("%f",&b);
		e=division (a,b);
		printf  ("The answer of %.2f/%.2f : %.2f",a,b,e);
}   
    else {
    	printf ("ERROR : INVALID OPERATOR ENTERED !");
	} 
}
	