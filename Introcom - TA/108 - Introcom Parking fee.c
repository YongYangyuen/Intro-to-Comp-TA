#include <stdio.h>
#include <stdlib.h>

int main() {
    int hr = 0, min = 0, fee = 0;
    
    scanf("%d %d", &hr, &min);
    
    if(min > 15) hr++;
    
    if(hr == 0) fee = 0;
    else if(hr >= 1 && hr <= 4) fee += 50;
    else fee += 50 + (hr - 4) * 10;
    
    printf("%d", fee);
    
    exit(EXIT_SUCCESS);
}
