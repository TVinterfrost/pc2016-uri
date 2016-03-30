#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void) {
	int n;
	scanf("%d", &n);

	int v[n], i, j, aux;
	srandom(time(NULL));

	for (i = 0; i < n; i++) {
		v[i] = random() % 100;
	}

	for ( i = n - 1; i >= 1; i--) {
		for ( j = 0; j < i; j++) {
			if ( v[j] > v[j + 1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}

	printf("\n");
}