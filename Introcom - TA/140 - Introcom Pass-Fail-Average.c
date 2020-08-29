#include <stdio.h>
#include <stdlib.h>

int main() {
    int score[10], i, sum = 0;
    float avg;
    
    for(i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    
    avg = sum / 10.0;
    
    printf("Pass: ");
    for(i = 0; i < 10; i++)
        if(score[i] >= 50) printf("%d ", score[i]);
    printf("\n");
        
    printf("Fail: ");
    for(i = 0; i < 10; i++)
        if(score[i] < 50) printf("%d ", score[i]);
    printf("\n");
    
    printf("Average: %.2f", avg);
    
    exit(EXIT_SUCCESS);
}
