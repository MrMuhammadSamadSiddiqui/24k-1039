#include <stdio.h>
#include <string.h>
int main (){
	int j=0 ;
	int i ; 
    int n ;
    int k ;
	printf ("\t\t\tTHIS PROGRAM CHECKS WHETHER A STRING IS PALINDROME OR NOT \n");
	printf ("Kindly input how many letter the word has : ");
	scanf ("%d",&n);
	char word[n];
	char check[n];
	printf ("Kindly input a word : ");
	scanf ("%s",&word);
	for (i=n-1;i>=0;i--){
		check[j]=word[i];
		j=j+1 ;
	}

	k=strcmp(check,word);
	if (k==0){
		printf ("Its a palindrome");
	}
	else {
		printf ("Its not a palindrome");
	}
}