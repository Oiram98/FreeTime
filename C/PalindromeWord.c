// This program checks if a word is palindrome.
#include <stdio.h>


int main() {
	char stringa[100] ;
	printf("Scrivere una parola: ") ;
	scanf("%s",stringa);
	int lunghezza=strlen(stringa);
	printf("Verra' restituto YES se la parola e' palindroma , NO se non lo e'... \n");
	char *p=&stringa[0];
	char *f=&stringa[lunghezza-1];
	printf("Risposta: ");
	while( *p == *f) {
		p++ ;
		f-- ;
		if (p==f || p>f) {
			printf("YES");
			break;
		}
	}
	if ( *p != *f ) {
		printf("NO");
	}
	return 0;
}

