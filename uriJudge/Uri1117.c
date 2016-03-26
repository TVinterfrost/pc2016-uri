#include <stdio.h>

int main() {
	float acum = 0;
	int i = 0, flag = 0;
	float n1, med;

	for ( i = 0; flag != 2; i++) {
		scanf("%f", &n1);
		if ((n1 >= 0 && n1 <= 10.0) ) {
			acum += n1;
			flag++;
		}
		else {
			printf("nota invalida\n");
		}
	}

	med = acum / (float)flag;

	printf("media = %.2f\n", med);

	return 0;
}
