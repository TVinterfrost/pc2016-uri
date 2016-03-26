#include <stdio.h>

int main() {
	int i = 0, gInter, gGremio, op;
	int vitGre = 0, vitInt = 0, emp = 0;

	do{
		scanf("%d %d", &gInter, &gGremio);
		i++;

		if (gInter == gGremio) {
			emp++;
		}
		if (gInter > gGremio) {
			vitInt++;
		}
		else {
			vitGre++;
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
	} while ( scanf("%d", &op) && op == 1 );

	printf("%d grenais\n", i);
	printf("Inter:%d\n", vitInt);
	printf("Gremio:%d\n", vitGre);
	printf("Empates:%d\n", emp);

	if ( vitGre > vitInt) {
		printf("Gremio venceu mais\n");
		}
	else  if ( vitInt > vitGre ){
		printf("Inter venceu mais\n");
	}

	else {
		printf("Nao houve vencedor\n");
	}

	return 0;
}