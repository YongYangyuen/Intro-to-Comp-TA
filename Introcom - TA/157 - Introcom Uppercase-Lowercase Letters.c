#include <stdio.h>
#include <stdlib.h>
#define N 100

int main() {
    char text[N];
    int i;
    
    gets(text);
    
    for(i = 0; text[i] != '\0'; i++)
        if(text[i] >= 'a' && text[i] <= 'z') text[i] += ('A' - 'a');
    puts(text);
    
    for(i = 0; text[i] != '\0'; i++)
        if(text[i] >= 'A' && text[i] <= 'Z') text[i] += ('a' - 'A');
    puts(text);

    exit(EXIT_SUCCESS);
}
