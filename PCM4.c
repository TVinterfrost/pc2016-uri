#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
	int n, i, j, k;
	scanf("%d", &n);

	int v[n], aux;
	srandom(time(NULL));

	//Lê um vetor aleatório
	for ( i = 0; i < n; i++) {
		v[i] = random() % 100;
	}

	//Bubble Sort
	for (i = n - 1; i >= 1; i--) {
		for ( j = 0; j < i; j++) {
			if ( v[j] > v[j + 1]) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux; 
			}
		}
	}

	//Apaga elementos que se repetem no vetor
	for (i = 0; i < n; i++) {
		for ( j = i + 1; j < n;) {
			if ( v[j] == v[i]) {
				for ( k = j; k < n; k++) {
					v[k] = v[k + 1];
				}
				n--;
			}
			else
				j++;
			}
		}
	
	//Mostra o vetor ordenado e sem repetição de elementos duplicados
	for ( i = 0; i < n; i++ ) {
		printf("%d ", v[i]);
	}
}