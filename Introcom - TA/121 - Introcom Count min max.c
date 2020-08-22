#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0, min = 0, max = 0;
    
    scanf("%d", &n);
    while(n > 0) {
        count++;
        if(count == 1) min = max = n;
        if(n < min) min = n;
        if(n > max) max = n;
        scanf("%d", &n);
    }
    
    printf("%d\n", count);
    printf("%d\n", min);
    printf("%d", max);
    
    exit(EXIT_SUCCESS);
}
