#include <stdio.h>
#define MAX 50

int fmax(int x[], int n);

int main() {
    int nums[MAX], n, i, mx;  
    
    scanf("%d", &n);   
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]); 
    
    mx = fmax(nums, n);
    printf("%d", mx);  
   
    return 0;
}

int fmax(int x[], int n) {
    int i, max;
    
    max = x[0];
    for(i = 1; i < n; i++)
        if(x[i] > max) max = x[i];
    
    return max;
}
