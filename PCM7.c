#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(void) {
	int m[5][5], sum = 0, i, j, p = 0;
	float med;
	srandom(time(NULL));

	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++) {
			m[i][j] = random() % 100;
		}
	}

	//Pega Diagonal Secundária
	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++) {
			if ( j == ( 4 - i) ) {
				sum += m[i][j];
			}
		}
	}

	med = (float)sum / (5 * 5);

	printf("Posições abaixo que têm valores abaixo da média\n");
	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++) {
			if ( m[i][j] < med) {
				printf("Posição[%d][%d]\n", j, i);
				p++;
			}
		}
	}
	printf("\n");

	printf("              Matriz\n");
	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 5; j++) {
			printf("%5d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("A soma da diagonal principal é: %d\n", sum);
	printf("A média da diagonal principal é: %.2f\n", med);
	printf("%d elementos abaixo da média\n", p);
}