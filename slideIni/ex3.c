#include <stdio.h>

/* int main() {
	int t1, t2, i, fib, n;
	int soma = 0;
	
	t1 = 1;
	fib = 0;
	
	scanf("%d", &n);
	
	for ( i = 0; i < n; i++ ) {
		t2 = t1 + fib;
		t1 = fib;
		fib = t2;
		printf("%d ", fib);
		soma += fib;
	}
	
	printf("\n");
	printf("Soma: %d\n", soma);
	
	return 0;
}
*/

int main() {
	int t1, t2, fib, soma, i, n;
	soma = 0;
	t1 = 1;
	i = 0;
	fib = 0;
	
	scanf("%d", &n);
	
	while ( i < n ) {
		t2 = t1 + fib;
		t1 = fib;
		fib = t2;
		i++;
		printf("%d ", fib);
		soma += fib;
	}
	
	printf("\nSoma: %d ",soma );
	
	return 0;
} 
