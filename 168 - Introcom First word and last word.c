#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    char words[n][30];
    char first_word[30], last_word[30];
    
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    strcpy(first_word, words[0]);
    strcpy(last_word, words[0]);
    for(i = 1; i < n; i++) {
        if(strcmp(words[i], first_word) < 0) strcpy(first_word, words[i]);
        if(strcmp(words[i], last_word) > 0) strcpy(last_word, words[i]);
    }
    
    printf("%s %s", first_word, last_word);
    
    exit(EXIT_SUCCESS);
}
