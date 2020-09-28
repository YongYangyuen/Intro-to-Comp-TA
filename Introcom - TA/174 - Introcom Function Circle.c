#include <stdio.h>
#include <math.h>
#define Pi 3.14159 

float area(int r);
float circum(int r);
float volume(int r);
float surface(int r);

int main() {   
    int r; 
    
    scanf("%d", &r);   
    printf("Circle Circumference: %.4f\n", circum(r) );   
    printf("Circle Area: %.4f\n", area(r) );   
    printf("Sphere Volume: %.4f\n", volume(r) );   
    printf("Sphere Surface: %.4f", surface(r) );
    
    return 0;
}

float area(int r) {
    return Pi * pow(r, 2);
}

float circum(int r) {
    return 2 * Pi * r;
}

float volume(int r) {
    return 4.0 / 3 * Pi * pow(r, 3);
}

float surface(int r) {
    return 4 * Pi * pow(r, 2);
}
