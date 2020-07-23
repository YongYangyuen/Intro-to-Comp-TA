#include <stdio.h>
#include <stdlib.h>

int main() {
    int date, day, month, year;
    
    scanf("%d", &date);
    
    day = date % 100;
    month = date % 10000 / 100;
    year = date / 10000 - 543;
    
    printf("%02d/%02d/%04d", month, day, year);
    
    exit(EXIT_SUCCESS);
}
