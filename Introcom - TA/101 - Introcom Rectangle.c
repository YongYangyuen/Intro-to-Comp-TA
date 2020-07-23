#include <stdio.h>
#include <stdlib.h>

int main() {
    int width, length, area, perimeter;
    
    scanf("%d %d", &width, &length);
    
    area = width * length;
    perimeter = width * 2 + length * 2;
    
    printf("%d\n%d", area, perimeter);
    
    exit(EXIT_SUCCESS);
}
