#include <stdio.h>

void show(int M[5][2]){ 
    int i, j; 
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            printf("%3d\t", M[i][j]);
        }
        printf("\n");  
    }
}

void mult(int M[5][2], int n);

int main() {  
    int matrix[5][2], n, i, j;  
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d", &n); 
    
    mult(matrix, n); 
    show(matrix);  
    
    return 0;
}

void mult(int M[5][2], int n) {
    int i, j; 
    
	for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            M[i][j] *= n;
        }
   	}
}
