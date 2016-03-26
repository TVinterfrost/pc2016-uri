#include <stdio.h>

int main() {
	int op, die, alc, gas;

	printf("MUITO OBRIGADO\n");
	do {
		scanf("%d", &op);
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

	printf("Alcool: %d\n", alc);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", die);
	return 0;
}