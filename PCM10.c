#include <stdio.h>

int main ()
{

    int i, j, n;
    scanf("%d", &n);

    for ( i = 1; i <= n; i += 2 ) {
        printf("\n");

        for ( j = 1; j <= i; j ++ )
            printf("X");

    }

    for ( i = n - 2; i >= 1; i-= 2 ) {
        printf("\n");

        for ( j = 1; j <= i; j++ )
            printf("X");

    }

    printf("\n");
    return 0;
}
