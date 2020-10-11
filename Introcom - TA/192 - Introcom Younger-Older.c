#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} date;

struct person {
    char name[30];
    date birthdate;
};

int main() {
    struct person p1 = {"John", {15, 3, 1995}}, p2;
    
    gets(p2.name);
    scanf("%d/%d/%d", &p2.birthdate.day, &p2.birthdate.month, &p2.birthdate.year);

    if(p1.birthdate.year < p2.birthdate.year) printf("%s is older than %s", p1.name, p2.name);
    else if (p1.birthdate.year > p2.birthdate.year) printf("%s is younger than %s", p1.name, p2.name);
    else {
        if(p1.birthdate.month < p2.birthdate.month) printf("%s is older than %s", p1.name, p2.name);
        else if(p1.birthdate.month > p2.birthdate.month) printf("%s is younger than %s", p1.name, p2.name);
        else {
            if(p1.birthdate.day < p2.birthdate.day) printf("%s is older than %s", p1.name, p2.name);
            else if(p1.birthdate.day > p2.birthdate.day) printf("%s is younger than %s", p1.name, p2.name);
            else printf("%s has the same age as %s", p1.name, p2.name);
        }
    }

    return 0;
}
