/*Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/
#include <stdio.h>
#include <string.h>
void reverse_string_display(char user_string[], int n){
	int i ;
	for (i=n;i>=0;i--){
		printf ("%c",user_string[i]);
	}
}

int main (){
	char user_string[500];
	printf ("\t\t\tTHIS PROGRAM REVERSES THE STRING");
	printf ("\nKindly input the string (a string is a group of characters) : ");
	gets (user_string);
	int n=strlen(user_string);
	reverse_string_display (user_string,n);
	
	
}