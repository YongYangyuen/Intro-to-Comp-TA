#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum;
    
    scanf("%d", &n);
    
    sum = (n % 10) + (n / 10 % 10) + (n / 100 % 10) + (n / 1000 % 10) + (n / 10000 % 10) + (n / 100000 % 10);
    if(sum >= 10)  sum = (sum % 10) + (sum / 10 % 10);
    if(sum >= 10)  sum = (sum % 10) + (sum / 10 % 10);
    
    printf("%d", sum);
    
    exit(EXIT_SUCCESS);
}
