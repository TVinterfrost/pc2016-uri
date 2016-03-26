#include <stdio.h>

int main() {
	float acum ;
	int flag, X;
	float n1;

	do {
		flag = 0;
		acum = 0.0;
		while (flag < 2) {
			scanf("%f", &n1);
			if (n1 >= 0 && n1 <= 10.0) {
				acum += n1;
				flag++;
			}
			else {
				printf("nota invalida\n");
			}
		}
		printf("media = %.2f\n", acum / 2);

		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &X);
		} while ( X != 1 && X != 2);
	} while ( X != 2);

	return 0;
}
