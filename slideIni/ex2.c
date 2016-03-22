#include <stdio.h>

int main() {
	
	float v1, v2, mt;
	float med = 0, op = 0;
	
	scanf("%f %f %f", &v1, &v2, &mt);
	
	med = ( (3 * v1) + (3 * v2) + (4 * mt)) / 10;
	
	if ( med >= 7.0 ) {
		printf("Nota: %.2f\n", med);
		printf("Aluno aprovado por média\n");
	}
	
	else {
		printf("Nota: %.2f\n", med);
		op = 7.0 - med;
		printf("O aluno precisa de %.2f na prova optativa\n", op);
	}
	
	return 0;
}
	

