#include <stdio.h>

int main() {
	int X, Y, fv, i;
	fv = 0;
	scanf("%d", &X);
	scanf("%d", &Y);

	if ( X < Y ) {
		for ( i = X; i <= Y; i++) {
			if ( i % 13 != 0 ) {
				fv += i;
			}
		}
	} else {
		for ( i = Y; i <= X; i++) {
			if ( i % 13 != 0) {
				fv += i;
			}
		}
	}

	printf("%d\n", fv );
	return 0;
}