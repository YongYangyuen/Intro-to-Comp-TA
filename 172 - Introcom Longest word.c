#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    char words[n][30];
    char longest_word[30];
    
    for(i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    strcpy(longest_word, words[0]);
    for(i = 1; i < n; i++) {
        if(strlen(words[i]) > strlen(longest_word)) strcpy(longest_word, words[i]);
    }
    
    for(i = 0; i < n; i++) {
        if(strlen(words[i]) == strlen(longest_word)) {
            if(strcmp(words[i], longest_word) > 0) strcpy(longest_word, words[i]);
        } 
    }
    
    puts(longest_word);
    
    exit(EXIT_SUCCESS);
}
