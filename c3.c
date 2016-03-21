#include <stdio.h>

long int spiral ( long int b );

int main() {
	long int p, n, k, count, i, j;
	
	scanf("%ld %ld", &p, &n); 
	
	if ( p <= n ) {
		i = p;
		j = n;
	}
		
	else {
		i = p;
		j = n;
	}
		
	count = 0;
	for ( k = i; k <= j; k++ ) {
		if (spiral(k) > count ) {
			count = spiral(k);
		}
	}
	printf("%ld %ld %ld\n", p, n, count);
	return 0;
}

	
long int spiral ( long int b ) {
	long int coUnt;
		
	coUnt = 1;
		
	while ( b != 1 ) {
		coUnt++;
		if ( b % 2 == 1 ) {
			b = 3 * b + 1;
		}
			
		else {
			b = b / 2;
		}
	}
	
	return coUnt;
}
		
