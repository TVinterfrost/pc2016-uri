#include <stdio.h>

int main() {
	float v1, v2, mt;
	float med = 0;
	
	scanf("%f %f %f", &v1, &v2, &mt);
	
	med = ( (3 * v1) + (3 * v2) + (4 * mt)) / 10;
	
	printf("%.2f\n", med);
	
	return 0;
}
	
