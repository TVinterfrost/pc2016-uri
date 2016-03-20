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
