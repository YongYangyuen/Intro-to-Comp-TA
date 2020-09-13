#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i, j, det;
    
    scanf("%d", &size);
    
    int a[size][size];
    
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    if(size == 2) det = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    if(size == 3) det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    
    printf("%d", det);
    
    exit(EXIT_SUCCESS);
}
