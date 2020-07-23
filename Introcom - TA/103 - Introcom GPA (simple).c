#include <stdio.h>
#include <stdlib.h>

int main() {
    int weight, i, sum_gp = 0, sum_weight = 0;
    char grade;
    float gpa;
    
    for(i = 0; i < 5; i++) {
        scanf("%d %c", &weight, &grade);
        if(grade == 'A') sum_gp += weight * 4;
        if(grade == 'B') sum_gp += weight * 3;
        if(grade == 'C') sum_gp += weight * 2;
        if(grade == 'D') sum_gp += weight * 1;
        if(grade == 'E') sum_gp += weight * 0;
        sum_weight += weight;
    }
    
    gpa = (float)sum_gp / sum_weight;
    
    printf("%.2f", gpa);
    
    exit(EXIT_SUCCESS);
}
