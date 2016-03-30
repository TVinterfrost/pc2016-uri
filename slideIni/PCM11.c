#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void knuthSh( int v[], int p);

void main(void) {
	int v[10];
	int i = 0;

	printf("\n");
	printf("Antes da troca\n");
	for ( i = 0; i < 10; i++) {
		v[i] = i;
		knuthSh(v, 10);
		printf("\n");
	}

	printf("\n");
	printf("Pós troca\n");
	for ( i = 0; i < 10; i++) {
		knuthSh(v, 10);
		printf("\n");
	}
}


void knuthSh( int v[], int p ) {
	if ( p == 0 || p == 1) 
		return;
	
	srand(time(NULL));

	int i;
	int si, aux;

	for ( i = p -1; i > 0; i--) {
		si = rand() % (i + 1);
		aux = v[si];
		v[si] = v[i];
		v[i] = aux;
	}

	for ( i = 0; i < p; i++) {
		printf("%d ", v[i]);
	}
}