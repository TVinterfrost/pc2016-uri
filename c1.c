<<<<<<< HEAD
=======
/*Peter tem n cigarros. Ele os fuma um a um guardando todas as bitucas. A cada k > 1 bitucas ele

pode formar um novo cigarro.

Quantos cigarros Peter pode ter?

Entrada
A entrada é uma sequência de linhas. Cada linha contém dois números inteiros denotando os
valores de n e k. A entrada é terminada por um EOF (fim de arquivo).
Saída
Para cada linha de entrada, imprima um número inteiro em cada linha separa dando o número
máximo de cigarros que o Peter pode ter.
Exemplo de entrada
4 3
10 3
100 5
Exemplo de saída
5
14
124
*/
>>>>>>> 7e6d384c8ea4d3b432c0724ea0bc3ef1e9586cdb
#include <stdio.h>

int main() {
	int cigar, butt, count, awns; //variables 
	
	while ( scanf("%d %d", &cigar, &butt ) == 2 ) { 
		count = 0; 
		awns = 0; 
		
		while ( cigar > 0 ) { 
			count += cigar; 
			awns += cigar; 
			cigar = awns/butt; 
			awns %= butt;  
		}
		
		printf("%d\n", count); 
	}
	
	return 0;
}
