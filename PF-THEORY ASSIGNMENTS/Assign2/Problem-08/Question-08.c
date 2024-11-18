#include <stdio.h>
#include <math.h>
#include <string.h>
int binary_to_decimal_convertor(int number){
	int arr[1000];
	int f=0,i,g ;
	int e= number ;
	int d= number ;
	for (i=0;d!=0;i++){
		e=d%10 ;
		d=d/10 ;
		g=pow (2,i) ;
		f=f+(e*g);
//		printf ("d=%d \t f=%d  \t e=%d  \t g=%d \n ",d,f,e,g);
	}
	return f ;
}

int decimal_binary_convertor(int number){
	int arr[1000];
	int f=0,i,n,g ;
	int e= number ;
	int d= number ;
	for (i=0;d!=0;i++){
		e=d%2 ;
		d=d/2 ;
		n=i ;
		arr[i]=e;
//		printf ("d=%d \t f=%d  \t e=%d  \t g=%d \n  i=%d ",d,f,e,g,i);
	}
	for (i=n;i>=0;i--){
		f=pow(10,i);
		g=f*arr[i]+g;
	}
	return g ;
}

void decimal_to_hexadecimal_convertor (int number){
	int e = number ;
	int b = number ;
	int i,n=0 ;
	int arr[1000];

	for (i=0;e!=0;i++){
		b=e%16;
		arr[i]=b;
		e=e/16 ;
		n=i ;
//		printf ("%d  %d",e,arr[i]);
	}
	for (i=n;i>=0;i--){
		if (arr[i]>=0 && arr[i]<=9){
			printf ("%d",arr[i]);
		}
		else if (arr[i]==10){
			printf ("A");
		}
		else if (arr[i]==11){
			printf ("B");
		}
		else if (arr[i]==12){
			printf ("C");
		}
		else if (arr[i]==13){
			printf ("D");
		}
		else if (arr[i]==14){
			printf ("E");
		}
		else if (arr[i]==15){
			printf ("F");
		}
	}
}

void binary_to_hexadecimal(int number){
	number=binary_to_decimal_convertor(number);
	decimal_to_hexadecimal_convertor (number);
}

int hexadecimal_binary_convertor(char str[],int n){
	int i;
	int j=0 ;
	int a,e=0,k,d,s;
	int arr[n];
	for (i=0;i<n;i++){
		if (str[i]=='0'){
			arr[i]=0;
//			printf ("0000");
		}
		else if (str[i]=='1'){
			arr[i]=1;
//			printf ("0001");
		}
		else if (str[i]=='2'){
			arr[i]=10;
//			printf ("0010");
		}
		else if (str[i]=='3'){
			arr[i]=11;
//			printf ("0011");
		}
		else if (str[i]=='4'){
			arr[i]=100;
//			printf ("0100");
		}
		else if (str[i]=='5'){
			arr[i]=101;
//			printf ("0101");
		}
		else if (str[i]=='6'){
			arr[i]=110;
//			printf ("0110");
		}
		else if (str[i]=='7'){
			arr[i]=111;
//			printf ("0111");
		}
		else if (str[i]=='8'){
			arr[i]=1000;
//			printf ("1000");
		}
		else if (str[i]=='9'){
			arr[i]=1001;
//			printf ("1001");
		}
		else if (str[i]=='A' || str[i]=='a'){
			arr[i]=1010;
//			printf ("1010");
		}
		else if (str[i]=='B' || str[i]=='b'){
			arr[i]=1011;
//			printf ("1011");
		}
		else if (str[i]=='C' || str[i]=='c'){
			arr[i]=1100;
//			printf ("1100");
		}
		else if (str[i]=='D' || str[i]=='d' ){
			arr[i]=1101;
//			printf ("1101");
		}
		else if (str[i]=='E' || str[i]=='e'){
			arr[i]=1110;
//			printf ("1110");
		}
		else if (str[i]=='F' || str[i]=='f'){
			arr[i]=1111;
//			printf ("1111");
		}
		
		s=i ;
		
	}
	for (i=s;i>=0;i--){
		k=j*4;
		d=pow(10,k);
		e=(arr[i]*d)+e;
		j=j+1;
//		printf ("\n%d\n%d",e,k);
	}
	return e;
}

void hexadecimal_to_decimal_convertor(char str[],int n){
    char b[n];
    
	int s=hexadecimal_binary_convertor(b,n);
	 int d=binary_to_decimal_convertor(s);
	 printf ("%d",d);
}


int main (){
	int s,o ;
	char a ;
	char b[100] ;
	int number ;
	char c;
	printf ("\t\t\tWELCOME TO THE NUMBER SYSTEM CONVERTOR PROGRAM\n");
	printf ("\tKindly choose from one of these options\n\tBinary to decimal:      1\tDecimal to binary:       2\n\tDecimal to hexadecimal: 3\tHexadecimal to decimal:  4\n\tBinary to hexadecimal:  5\tHexadecimal to Binary:   6\n\nYour Option : ");
	scanf ("%d[1-6]",&o);
	
	if (o==1){
	printf ("\nNote:Kindly remember binary number include only 0's and 1's\nKindly input a binary number (base 2) :  ");
	scanf  ("%d[0-1]",&number) ;
	s=binary_to_decimal_convertor(number) ;
	printf ("%d when converted to decimal number system : ",number,s);
	}
	
	else if (o==2){
	printf ("Kindly input a decimal number (base 10)  : ");
	scanf  ("%d[0-9]",&number) ;
		s=decimal_binary_convertor(number);
		printf ("%d when converted to binary number system : %d",number,s);
	}

	else if (o==3){
		printf ("Kindly input a decimal number (base 10)  : ");
	    scanf  ("%d[0-9]",&number) ;
		printf ("%d  when converted to hexadecimal number system : ",number);
		decimal_to_hexadecimal_convertor(number);
	}
	
	else if (o==5){
		printf ("\033[34m]");
		printf ("\nNote:Kindly remember binary number include only 0's and 1's\nKindly input a binary number (base 2) :   ");
	    scanf  ("%d[0-1]",&number) ;
	    printf ("%d  when converted to hexadecimal number system : ",number);
		binary_to_hexadecimal(number);
	}
	else if (o==6){
		int n;
		int i=0 ;
		char b[100];
		printf ("\nNote :Kindly remember hexadecimal numbers include integers from 0-9 or Alphabets from A-F or both of them together\nKindly input a hexadecimal number(base 16): ");
		scanf ("%s[0-9A-Fa-f]",&b);
		n=strlen(b);
		int a=hexadecimal_binary_convertor(b,n);
		printf ("%s when converted to binary number system : %d ",b,a);
	}
	else if (o==4){
		int n,d,e;
		int i=0 ;
		char b[10];
		printf ("\nNote :Kindly remember hexadecimal numbers include integers from 0-9 or Alphabets from A-F or both of them together\nKindly input a hexadecimal number(base 16): ");
		scanf ("%s[0-9A-Fa-f]",&b);
		n=strlen(b);
		d=hexadecimal_binary_convertor(b,n);
		e=binary_to_decimal_convertor(d);
		printf ("%s when converted to decimal number system : %d",b,e);
	}
		
	}

	