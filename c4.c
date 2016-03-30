#include <stdio.h>

int main() {
	int ans[5], i, v, iterations, flag, res;
	flag = 0;
	
	while (scanf("%d", &v) == 1 ) {
	
		if ( v == 0 ) {
			break;
		}
		
		for ( iterations = 0; iterations < v; iterations++ ) {
			for ( i = 0; i < 5; i++ ) {
				scanf("%d", &ans[i]);
			}
			
			for ( i = 0, flag = 0; i < 5; i++ ) {
				if ( ans[i] <= 127 && ans[i] >= 0 ) {
					res = i;
					flag++;
				}
				
				else if ( ans[i] > 255 ) {
					flag = 3;
				}
			}
			
			if ( flag == 1 ) {
				printf("%c\n", res+'A');
			}
			
			else {
				 printf("*\n");
			 }
		 }
	 } 
	 return 0;
 }
