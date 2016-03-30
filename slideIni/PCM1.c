#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n[10], i, M , m ;
	srandom(time(NULL));

	for ( i = 0; i < 10; i++) {
		n[i] = random() % 100;
		if ( n[i] == 0) {
			m = n[0];
			M = n[0];
		}

		else if ( n[i] < M ) {
			M = n[i];
		}

		else if ( n[i] > m ) { 
			m = n[i];
		}
	}

	printf("Vetor\n");
	for ( i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}

	printf("\n");
	printf("Menor: %d\n", M);
	printf("Maior: %d\n", m);

	return 0;
}