#include <stdio.h>
#include <math.h>

#define MAX 10

void show(int M[MAX][MAX], int row, int col);
void msquare(int M[MAX][MAX], int row, int col);

int main() {
    int matrix[MAX][MAX], n, i, j, r = 2, c = 4;   
    
    for(i = 0; i < r; i++)          
        for(j = 0; j < c; j++) 
             scanf("%d", &matrix[i][j]);
             
    msquare(matrix, r, c);     
    show(matrix, r, c);      
    
    return 0; 
}

void show(int M[MAX][MAX], int row, int col) {    
    int i, j;   
    
    for(i = 0; i < row; i++) {  
        for(j = 0; j < col; j++) {
            printf("%3d\t",M[i][j]);
        }
        printf("\n");
    }
}

void msquare(int M[MAX][MAX], int row, int col) {
    int i, j;   
    
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            M[i][j] = pow(M[i][j], 2);
}
