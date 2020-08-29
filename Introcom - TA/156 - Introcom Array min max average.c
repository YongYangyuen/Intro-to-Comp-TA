#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
    int score[N], i, sum = 0, min = 0, max = 0, pass = 0;
    float avg;
    
    for(i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    
    avg = sum / (float)N;
    
    min = max = score[0];
    for(i = 0; i < N; i++) {
        if(score[i] < min) min = score[i];
        if(score[i] > max) max = score[i];
        if(score[i] >= avg) pass++;
    }
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", avg);
    printf("Pass: %d", pass);
       
    exit(EXIT_SUCCESS);
}
