#include <stdio.h>
#include <stdlib.h>

int main() {
    float w, h, bmi;
    
    scanf("%f %f", &w, &h);
    
    bmi = w / (h * h);
    
    printf("%.2f", bmi);
    
    exit(EXIT_SUCCESS);
}
