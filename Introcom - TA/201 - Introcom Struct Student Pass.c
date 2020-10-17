#include <stdio.h>
#define MAX 20

typedef struct {
    int stcode;  char name[30];
    float gpa;
} Student;

int nPass(Student s[ ], int n);

int main() {
    Student stds[MAX];
    int n, i, np;

    scanf("%d", &n); 
    for(i = 0; i < n; i++) {
        scanf("%d", &stds[i].stcode);  
        scanf("%s", stds[i].name);
        scanf("%f", &stds[i].gpa);
    }

    np = nPass (stds, n);
    printf("Number of pass students is %d", np);

    return 0;
}

int nPass(Student s[], int n) {
    int i, count = 0;

    for(i = 0; i < n; i++) {
        if(s[i].gpa >= 2.0) {
            count++;
            printf("%s\n", s[i].name);
        }
    }

    return count;
}
