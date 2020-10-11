#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    float gpa;
};

int main() {
    struct Student s1, s2, s3;
    struct Student first, second, third;

    scanf(" %[^\n] %f", s1.name, &s1.gpa);
    scanf(" %[^\n] %f", s2.name, &s2.gpa);
    scanf(" %[^\n] %f", s3.name, &s3.gpa);

    if(s1.gpa > s2.gpa) {
        if(s1.gpa > s3.gpa) {
            strcpy(first.name, s1.name);
            if(s2.gpa > s3.gpa) {
                strcpy(second.name, s2.name);
                strcpy(third.name, s3.name);
            }
            else {
                strcpy(second.name, s3.name);
                strcpy(third.name, s2.name);
            }
        }
    }
    if(s2.gpa > s1.gpa) {
        if(s2.gpa > s3.gpa) {
            strcpy(first.name, s2.name);
            if(s1.gpa > s3.gpa) {
                strcpy(second.name, s1.name);
                strcpy(third.name, s3.name);
            }
            else {
                strcpy(second.name, s3.name);
                strcpy(third.name, s1.name);
            }
        }
    }
    if(s3.gpa > s1.gpa) {
        if(s3.gpa > s2.gpa) {
            strcpy(first.name, s3.name);
            if(s1.gpa > s2.gpa) {
                strcpy(second.name, s1.name);
                strcpy(third.name, s2.name);
            }
            else {
                strcpy(second.name, s2.name);
                strcpy(third.name, s1.name);
            }
        }
    }

    printf("First: %s\n", first.name);
    printf("Second: %s\n", second.name);
    printf("Third: %s\n", third.name);
    
    return 0;
}  
