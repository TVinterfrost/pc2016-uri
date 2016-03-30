#include <stdio.h>

void main(void) {
	int x[50], i, aux[50];
	for ( i = 0 ; i < 50; i++) {
		x[i] = 0;
		x[ 50 / 2 ] = 1;
		aux[i] = x[i];
	}

	int n;
	scanf("%d", &n);

	printf("Vetor Original\n");
	for ( i = 0 ; i < 50; i++) {
		printf("%d ", aux[i]);
	}

	printf("\n");
	printf("Vetor embaralhado\n");
	for ( i = 0; i < n; i++) {
		x[i] = (x[i - 1] + x[i + 1] % 2);
		printf("%d ", x[i]);
	
	}

}