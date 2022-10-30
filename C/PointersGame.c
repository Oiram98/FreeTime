/*
INPUT: 10 characters string

Digits in the string will be replaced with an asterisk
*/

#include <stdio.h>
#include <string.h>
int main() {
	char array[10];
	printf("Inserire una stringa lunga 10 caratteri");
	scanf("%s",array);
	char *p ;
	p=&array[0];
	if (strlen(array)<10) {
		do {
			if (*p >= '0' && *p <= '9') {
				*p='*' ;
			}
			p++   ;
		}
		while (*p != '\0') ;
		printf("%s",array) ;
	}
	else {
	printf("Errore.USCITA") ; 
	}

	return 0;
}

