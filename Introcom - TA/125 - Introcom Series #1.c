#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, s = 1, d = 1;
    
    scanf("%d", &n);
    while(s <= n) {
        printf("%d ", s);
        s += d;
        d++;
    }
    
    exit(EXIT_SUCCESS);
}
