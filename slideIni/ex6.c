#include <stdio.h>

int main() {
	int i, n, s = 0;
	
	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++ ) {
		if ( n % i == 0 ) {
			printf("%d ", i);
			s += i;
		}
	}
	printf("\n");
	printf("Soma dos divisores: %d\n", s);
	return 0;
}
