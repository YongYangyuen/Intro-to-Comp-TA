#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[30];
    
    gets(name);
    printf("Hello \"%s\"\n", name);
    
    exit(EXIT_SUCCESS);
}
