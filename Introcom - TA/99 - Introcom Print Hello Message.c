#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    
    scanf("%c", &c);
    printf("\"Hello World!\"\n");
    printf("Goodbye '%c'", c);
    
    exit(EXIT_SUCCESS);
}
