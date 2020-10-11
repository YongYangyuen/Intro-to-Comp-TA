#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main() {  
    struct date today, birthday;
    int age;
    
    scanf("%d/%d/%d", &today.day, &today.month, &today.year);
    scanf("%d/%d/%d", &birthday.day, &birthday.month, &birthday.year);
    
    if(today.month <= birthday.month && today.day < birthday.day) age = today.year - birthday.year - 1;
    else age = today.year - birthday.year;

    printf("Age = %d\n", age);
    
    return 0;
}
