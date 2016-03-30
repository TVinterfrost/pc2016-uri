#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void) {
	int n, m , i , j, beyond = 0, sum = 0;
	float med = 0;

	scanf("%d %d", &n, &m);

	int v[n][m];
	srandom(time(NULL));
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			v[i][j] = random() % 100;
			sum += v[i][j];
			med = sum / (n * m);
		}
	}

	for ( i = 1; i <= n; i++ ) {
		for (j = 1; j <= m; j++) {
			if (v[i][j] > med) {
				beyond++;
			}
		}
	}
			
	printf("Matriz %d * %d\n", n, m);
	for (i = 1; i <= n; i++) { 
		for (j = 1; j <= m; j++) {
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}

	printf("A soma dos elementos é: %d\n", sum);
	printf("A média dos elementos é: %.2f\n", med);
	printf("O número de elementos que está acima da média é: %d\n", beyond);


}