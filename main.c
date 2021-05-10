#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int r;

    printf("Enter any integer: ");
    scanf("%d", &n);
    printf("Enter range: ");
    scanf("%d", &r);

    for ( i = 1; i <= r; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}
