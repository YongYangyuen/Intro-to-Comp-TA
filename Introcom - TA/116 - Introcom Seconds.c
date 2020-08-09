#include <stdio.h>
#include <stdlib.h>

int main() {
    int hr = 0, min = 0, sec = 0;
    
    scanf("%d", &sec);
    
    hr = sec / 60 / 60 % 60;
    min = sec / 60 % 60;
    sec = sec % 60;
    
    printf("%d:%d:%d", hr, min, sec);
    
    exit(EXIT_SUCCESS);
}
