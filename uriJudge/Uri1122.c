#include <stdio.h>

int main() {
	int op, die = 0, alc = 0, gas = 0;


	do {
		if ( op == 1 ) {
			alc++;
		}
		else if ( op == 2 ) {
			gas++;
		}
		else if ( op == 3 ) {
			die++;
		}
	} while ( scanf("%d", &op) && op != 4 );

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alc);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", die);
	return 0;
}