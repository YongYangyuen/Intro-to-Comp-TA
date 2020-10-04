#include <stdio.h>
#include <string.h>

void lower(char str[]);

int main() { 
    char message[100];
    
    gets(message);
    lower(message);
    printf("%s", message);
    
    return 0;
}

void lower(char str[]) {
    int i;
    
    for(i = 0; i < strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';
    }
}
