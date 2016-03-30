#include <stdio.h>

int main() {
	int X, Y, i;
	scanf("%d", &X);
	scanf("%d", &Y);

	int aux;

	if ( X > Y ) {
		aux = X;
		X = Y;
		Y = aux;
	}


	for ( i = X + 1; i < Y; i++) {
		if ( i % 5 == 2 ||  i % 5 == 3) {
			printf("%d\n",i);
		}
	}

	return 0;
}