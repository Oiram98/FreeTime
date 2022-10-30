// This program reverses a word 

#include <stdio.h>
int main() {
	int array1[5];
	int array2[5];
	int i;
	int *a1 =&array1[0] ;
	int *a2=&array2[4];
	for (i=0;i<5;i++){
		printf("Inserire valore nella posizione %d dell' array : " ,i);
		scanf("%d",&array1[i]);
	}
	for (i=0;i<5;i++) {
		*a2 = *a1 ;
		a1 ++ ;
		a2 -- ;
	}
	for (i=0;i<5;i++){
	printf("%d",array1[i]);
	}
	printf("\n");
	for (i=0;i<5;i++){
	printf("%d",array2[i]);
	
	}
	return 0;
}

