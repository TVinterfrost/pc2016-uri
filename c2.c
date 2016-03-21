<<<<<<< HEAD
=======
/* Os agricultores alemães estão recebendo um prêmio de acordo com as condições de sua
fazenda. Seja o seguinte regulamento simplificado: sabe-se o tamanho da fazenda de cada
agricultor em metros quadrados e o número de animais que vivem nela. Não será levado em
consideração se há animais de diferentes espécies, embora isto não esteja muito próximo da
realidade. Além disso, tem-se informações sobre o grau de uso de equipamentos e práticas
benéficas ao meio-ambiente por parte do agricultor, expresso por um número inteiro maior que
zero. A quantidade de dinheiro que um agricultor recebe pode ser calculada a partir desses
parâmetros, conforme segue. Primeiro você precisa do espaço que um único animal ocupa, em
média. Este valor (em metros quadrados) é então multiplicado pelo parâmetro que representa o
benefício que o agricultor faz ao ambiente, resultando no prêmio pago por animal ao agricultor.
Para calcular o prêmio final de um agricultor só multiplicar este prêmio por animal, pelo número de
animais que o agricultor possui.

Entrada

A primeira linha da entrada contém um único inteiro positivo n (<20), indicando o número de
casos de teste. Cada caso de teste começa com uma linha que contém um único inteiro f (0 <f <20),
o número de agricultores, no caso de teste. Esta linha é seguida por três números inteiros positivos
para cada agricultor: o tamanho da fazenda em metros quadrados, o número de animais que possui
e o valor inteiro que expressa o benefício do agricultor ao ambiente. Nenhum inteiro na entrada é
superior a 100.000 ou inferior a 0.

Saída
Para cada caso de teste imprima uma linha contendo um número inteiro que é a soma total 
do prêmio que o governo da Alemanha pagará para aquele caso de teste. Não imprima linhas em 
branco entre os casos.

Exemplo de Entrada

4
5
1 1 1
2 2 2
3 3 3
2 3 4
8 9 2

3
9 1 8
6 12 1
8 1 1

3
10 30 40
9 8 5
100 1000 70

4 
5 6 7 
7 6 5 
8 9 3 
3 10 5 

Exemplo de Saída
38
86
7445
190
*/
>>>>>>> 7e6d384c8ea4d3b432c0724ea0bc3ef1e9586cdb
#include <stdio.h>

int main() {
	int count, iterations, nestLoop, i;
	int farmSize, numberAnimals, environBenef;
	int payPrice = 0;
	int acumulatorPrice;
	
	count = 0;
	acumulatorPrice = 0;
	scanf("%d", &iterations);
	
	while ( count < iterations ) {
		scanf("%d", &nestLoop);
		count++;
		for ( i = 0; i < nestLoop; i++ ) {
			scanf("%d %d %d", &farmSize, &numberAnimals, &environBenef);
			payPrice = farmSize * environBenef;
			acumulatorPrice += payPrice;
		}
	}
	
	printf("%d", acumulatorPrice);
	
	return 0;
}

//This exercise was made using a variable to count a loop for test, iterations and a loop inside the while, and an accumulator.
//I used variables to the size of farm, number of animals and the beneficial provided to environment.
//The Payprice was set to 0 to do not give garbage value.
//To get the final value I got the product value of Farm size * beneficial provided to environment.
//To get the final price I summed the acumulation price with the price
