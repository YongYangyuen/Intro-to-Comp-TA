#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    
    scanf("%c", &grade);
    
    switch(grade) {
        case 'A': printf("Excellent");
                  break;
        case 'B': printf("Good");
                  break;
        case 'C': printf("Fair");
                  break;
        case 'D': printf("Pass");
                  break;
        case 'E': 
        case 'F': printf("Fail");
                  break;
        case 'W': printf("Withdraw");
                  break;
                            
        default: printf("Unknown");
                 break;
    }
    
    exit(EXIT_SUCCESS);
}
