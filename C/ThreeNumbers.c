// This program takes 3 int numbers as input and print them in growing way.
#include <stdio.h>

int main()
{
	int primo,secondo,terzo,massimo,sec,ter;
	printf("Inserire primo numero intero:");
	scanf("%d",&primo);
	printf("Inserire secondo numero intero:");
	scanf("%d",&secondo);
	printf("Inserire terzo numero intero:");
	scanf("%d",&terzo);
	if (primo > secondo && primo > terzo ) {
		massimo=primo ;
		sec=secondo ;
		ter=terzo ;
		if ( secondo < terzo ) {
			sec=terzo ;
			ter=secondo ;
		}
	}
	else if (secondo > primo && secondo > terzo) {
		massimo=secondo ;
		sec=primo ;
		ter=terzo ;
		if ( primo < terzo ) {
			sec=terzo;
			ter=primo;
		}
	}
	else if ( terzo > primo && terzo > secondo ) {
		massimo=terzo ;
		sec=primo ;
		ter=secondo ;
		if ( primo < secondo ) {
			sec=secondo ;
			ter=primo ;
		}
	}
	printf ("%d %d %d",massimo,sec,ter);
	return 0;
}




		


