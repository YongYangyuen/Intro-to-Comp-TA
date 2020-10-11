#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imag;
    double abs;
} ComplexNum;

int main() {
    ComplexNum z1, z2;

    scanf("%lf%lf", &z1.real, &z1.imag);
    scanf("%lf%lf", &z2.real, &z2.imag);

    z1.abs = sqrt(pow(z1.real, 2) + pow(z1.imag, 2));
    z2.abs = sqrt(pow(z2.real, 2) + pow(z2.imag, 2));

    printf("z1 = %.2f + %.2fi\n", z1.real, z1.imag);
    printf("|z1| = %.2f\n", z1.abs);
    printf("z2 = %.2f + %.2fi\n", z2.real, z2.imag);
    printf("|z2| = %.2f\n", z2.abs);

    if(z1.abs > z2.abs) printf("z1 is greater than z2\n"); 
    else if(z1.abs < z2.abs) printf("z1 is less than z2\n");
    else printf("z1 has the same absolute value as z2\n");  

    return 0;
}
