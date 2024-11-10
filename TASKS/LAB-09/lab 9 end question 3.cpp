#include <stdio.h>
 void prime_number_checker(){
	int i=1 ;
	int b=1 ;
	int a ;
	int e ;
	printf ("Kindly input a number : ");
	scanf ("%d",&a);
	e=a/2 ;
	if (a==0){
		printf ("0 is neither a prime number nor a composite number ");
	}
	if (a==2){
		printf ("2 is a prime number ");
	}
	else if (a==1){
		printf ("0 is neither a composite nor a prime number ");
	}
	else {
	while (b!=0 && i<=e){
		i=i+1 ;
		b=a%i ;
    }
	 if (b!=0){
		printf ("%d is a prime number ",a);
	}
	else if (b==0){
			printf ("%d is not a prime number ",a);
			
	} 
}
}
    int main (){
    	prime_number_checker();
	}