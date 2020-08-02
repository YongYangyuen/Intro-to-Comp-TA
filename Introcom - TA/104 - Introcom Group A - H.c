#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    switch(n % 8) {
        case 0: printf("A");
                break;
        case 1: printf("B");
                break;
        case 2: printf("C");
                break;
        case 3: printf("D");
                break;
        case 4: printf("E");
                break;
        case 5: printf("F");
                break;
        case 6: printf("G");
                break;
        case 7: printf("H");
                break;
                
        default: break;
    }
    
    exit(EXIT_SUCCESS);
}
