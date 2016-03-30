#include <stdio.h>

void main(void) {
	int i, j;
	int n, m;
	scanf("%d %d", &n, &m);

	int m1[n][m], m2[n][m], sm[n][m];

	//Lê matrizes
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			scanf("%d", &m1[i][j]);
		}
	}

	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			scanf("%d", &m2[i][j]);
		}
	}

	//Soma
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			sm[i][j] = m1[i][j] + m2[i][j];
		}
	}

	printf("\n");
	//MATRIZ 1
	printf("Matriz 1\n");
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	//MATRIZ 2
	printf("Matriz 2\n");
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matriz com a soma\n");
	//Soma dos elementos
	for ( i = 0; i < n; i++) {
		for ( j = 0; j < m; j++) {
			printf("%d ", sm[i][j]);
		}
		printf("\n");
	}
}
