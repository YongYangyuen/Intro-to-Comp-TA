#include <stdio.h>

char grading(int s);

int main() {   
    int score;  
    
    scanf("%d", &score);   
    while(score >= 0 && score <= 100) {
        printf("%c\n", grading(score) );
        scanf("%d", &score);
    }
    
    return 0;
}

char grading(int s) {
    if(s >= 80) return 'A';
    else if(s >= 70) return 'B';
    else if(s >= 60) return 'C';
    else if(s >= 50) return 'D';
    else return 'E';
}
