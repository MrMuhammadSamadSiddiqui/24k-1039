#include <stdio.h>
#include <string.h>

int validateemail(char email[],int r){
	int i,a,b,c,d ;
	for (i=0;i<r;i++){
		if (email[i]=='@'){
			a=a+1;
			b=i;
		}
		else if (email[i]==' '){
			return 0;
		}
		if (a!=1){
			return 0;
		}
		else {
			for (i=b;i<r;i++){
				if (email[i]=='.'){
					return 1;
				}
			}
		}
	}
}
int main (){
	
	int k,r;
	char email[100];
	printf ("Kindly input your email  :  ");
	scanf ("%s",&email);
	r=strlen(email);
	k=validateemail(email,r);
	if (k==0){
		printf ("Email is invalid");
	}
	else if (k==1){
		printf ("Email is valid");
	}
}