#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, sum = 0;
    
    scanf("%d %d", &m, &n);
    
    for(i = m; i <= n; i++)
        sum += i;
        
    printf("%d", sum);
    
    exit(EXIT_SUCCESS);
}
