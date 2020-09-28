#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

int main() {
    int x[N], y[N], i;
    float distance = 0;
    
    for(i = 0; i < N; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for(i = 0; i < N; i++) {
        if(i+1 != N) distance += sqrt(pow(x[i] - x[i+1], 2) + pow(y[i] - y[i+1], 2));
        else distance += sqrt(pow(x[i] - x[0], 2) + pow(y[i] - y[0], 2));
    }
    
    printf("%.4f", distance);
    
    exit(EXIT_SUCCESS);
}
