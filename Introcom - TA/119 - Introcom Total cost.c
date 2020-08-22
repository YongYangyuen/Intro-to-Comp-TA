#include <stdio.h>
#include <stdlib.h>

int main() {
    int i_n, i;
    float f_n, sum = 0;
    
    scanf("%d", &i_n);
    
    for(i = 0; i < i_n; i++) {
        scanf("%f", &f_n);
        sum += f_n;
    }
    
    printf("%.2f\n", sum);
    printf("%.2f", sum * 0.95);
    
    exit(EXIT_SUCCESS);
}
