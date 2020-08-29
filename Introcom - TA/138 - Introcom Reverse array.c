#include <stdio.h>
#include <stdlib.h>
#define N 100

int main() {
    int a[N], n, i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    for(i = n - 1; i >= 0; i--)
        printf("%d ", a[i] * a[i]);
    
    exit(EXIT_SUCCESS);
}
