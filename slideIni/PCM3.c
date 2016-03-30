#include <stdio.h>

void main(void) {
	int n;
	scanf("%d", &n);

	float v1[n], v2[n], MT[n], M[n];
	int v[n], i, j, maiorV1 = 0;
	float mv1 = 0, mv2 = 0, mmt = 0, sum1 = 0, sum2 = 0, sum3 = 0;
	
	//Vetor para guardar nota dos alunos e calcular média	
	for (i = 1; i <= n; i++) {
		printf("V1 do aluno [%d]:\n", i + 1);
		scanf("%f", &v1[i]);
		printf("V2 do aluno [%d]:\n", i + 1);
		scanf("%f", &v2[i]);
		printf("MT do aluno [%d]:\n", i + 1);
		scanf("%f", &MT[i]);
		M[i] = ((3 * v1[i]) + (3 *v2[i]) + (4 * MT[i])) / 10;
		sum1 += v1[i];
		sum2 += v2[i];
		sum3 += MT[i];
	}

	//médias das provas e trabalhos
	mv1 = sum1 / n; 
	mv2 = sum2 / n;
	mmt = sum3 / n;

	for (i = 1; i <= n; i++) {
		if (M[i] > mv1) {
			maiorV1++;
		}
	}
	printf("\n");
	//Imprime os valores para cada aluno individualmente	
	for (i = 1; i <= n; i++) {
		printf("A média do aluno [%d] é: %.2f\n", i, M[i]);
	}

	printf("\n");
	printf("A média em V1 da turma é: %.2f\n", mv1);
	printf("A média em V2 da turma é %.2f\n", mv2);
	printf("A média em MT da turma é %.2f\n", mmt);
	printf("%d alunos obtiveram a nota maior que a média calculada para v1 que é: %.2f\n", maiorV1, mv1);
}

/* Testes
//5,9 3,6,8 v1 = 19/3 = 6,3
//5,1 9,4,3 v2 = 20/3 = 6,3
//7,5 7,10,6 mt = 17/3 = 5,3
*/ 