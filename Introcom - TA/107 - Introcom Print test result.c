#include <stdio.h>
#include <stdlib.h>

int main() {
    int p1_score, p2_score;
    
    scanf("%d %d", &p1_score, &p2_score);
    
    if(p1_score + p2_score >= 80) printf("Excellent");
    else if( (p1_score + p2_score >= 60) && (p1_score >= 25) && (p2_score >= 25) ) printf("Pass");
    else printf("Fail");
    
    exit(EXIT_SUCCESS);
}
