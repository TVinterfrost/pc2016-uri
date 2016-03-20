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
