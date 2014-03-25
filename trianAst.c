#include <stdio.h>

int main() {
    int i, j, num;
    printf("Ingresa un numero: ");
    scanf("%d",&num);
    for( i=0; i<=num; i++ ) {
        for( j=0; j<i; j++ )
                printf( "*" );
        printf( "\n" );
    }
    return 0;
}
