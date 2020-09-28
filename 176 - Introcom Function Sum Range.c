#include <stdio.h> 

int sumRange(int a, int b);

int main() {   
    int a, b; 
    
    scanf("%d%d", &a, &b);   
    printf("%d", sumRange(a, b) ); 
    
    return 0;
}

int sumRange(int a, int b) {
    int sum = 0;
    
    while(a <= b) {
        sum += a;
        a++;
    }
    
    return sum;
}
