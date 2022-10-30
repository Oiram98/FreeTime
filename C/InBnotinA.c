// Implementation of a function that takes 2 array A and B as input and will return an array with element that are present in B but not in A.

#include <stdio.h>
#include <stdlib.h>

int* subArray(int* A,int* B,int size_A,int size_B);


int main() {
	int *p=NULL;
	int A[]={5,6};
	int B[]={3,4,5,6};
	int size_A=1;
	int size_B=3;
	p=subArray(A,B,size_A,size_B);
	int dimensionearray=sizeof(p)/sizeof(p[0]);
	printf("------------- %d",dimensionearray);
	while (dimensionearray>=0) {
		printf("--> %d",p[dimensionearray]);
		dimensionearray-- ;
	}
	free(p);
	return 0;
}



int* subArray(int* A,int* B,int size_A,int size_B){
	int *punta=NULL;
	int k=1;
	int v=size_A;
	printf("TEST");
	printf("%d",size_A);
	printf("%d",size_B);
	for (size_B;size_B>=0;size_B --){
		int u=0 ;
		size_A=v;
		for (size_A;size_A>=0;size_A --) {
			if (A[size_A] == B[size_B]) {
				u=1;
				break;
			}
			else 
				continue;
		}
		if (u==0) {
			punta=(int*) realloc(punta,sizeof(int)*k);
			punta[k++]=B[size_B];
		}
	}
	return punta;
}



