#include <stdio.h>

void statusBP(int age, int low, int high);

int main() {   
    int age, low, high;   

    scanf("%d %d %d", &age, &low, &high); 
    statusBP(age, low, high);
    
    return 0;
}

void statusBP(int age, int low, int high) {
    if(high > 100 + age || low > 90) printf("Hypertension");
    else if(high < 90 || low < 60) printf("Hypotension");
    else printf("Normal");
}
