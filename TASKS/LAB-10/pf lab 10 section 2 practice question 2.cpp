#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
struct movie_details{
	char title [100];
	char genre [100];
	char director[100];
	int  year_of_release ;
	float ratings ;
};
int n;


void add_movie_details () {
	struct movie_details movie[n];
	int i;
	for (i=0;i<n;i++){
		printf ("\nEnter the following details for movie %d ",i+1);
		printf ("\n\tTITLE : ");
		fgets(movie[i].title,sizeof(movie[i].title),stdin);
		fgets(movie[i].title,sizeof(movie[i].title),stdin);
		printf ("\n\tGENRE : ");
		gets(movie[i].genre);
		printf ("\n\tDIRECTOR : ");
		gets(movie[i].director);
		printf ("\n\tYEAR OF RELEASE : ");
		scanf ("%d",&movie[i].year_of_release);
		printf ("\n\tRATINGS : ");
		scanf ("%d",&movie[i].ratings);
		printf ("%s",movie[i].title);
		
	}
	
}
int main (){
	printf ("How many movie details you want to add : ");
	scanf ("%d",&n);
	add_movie_details() ;
}