#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, pos = 0, neg = 0, even = 0, odd = 0;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 >= 0) pos++;
    else neg++;
    if(n1 % 2 == 0) even++;
    else odd++;
    
    if(n2 >= 0) pos++;
    else neg++;
    if(n2 % 2 == 0) even++;
    else odd++;
    
    if(n3 >= 0) pos++;
    else neg++;
    if(n3 % 2 == 0) even++;
    else odd++;
    
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
    
    exit(EXIT_SUCCESS);
}
