#include <stdio.h>

/*int main() {
	long fat;
	int i, n;
	fat = 1;
	
	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++ ) {
		fat *= i;
	}
	
	printf("Fat: %ld\n", fat);
	
	return 0;
}
*/

int main() {
	long fat = 1;
	int i = 1, n;
	
	scanf("%d", &n);
	
	while ( i <= n ) {
		fat *= i;
		i++;
	}
	
	printf("Fat: %ld\n", fat);
	
	return 0;
}
