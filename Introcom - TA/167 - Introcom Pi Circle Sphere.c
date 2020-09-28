#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int r;
    
    scanf("%d", &r);
    
    printf("M_PI: %.10f\n", M_PI);
    printf("Circle Circumference: %.4f\n", 2 * M_PI * r);
    printf("Circle Area: %.4f\n", M_PI * pow(r, 2));
    printf("Sphere Volume: %.4f\n", (4.0 / 3) * M_PI * pow(r, 3));
    printf("Sphere Surface: %.4f", 4 * M_PI * pow(r, 2));
    
    exit(EXIT_SUCCESS);
}
