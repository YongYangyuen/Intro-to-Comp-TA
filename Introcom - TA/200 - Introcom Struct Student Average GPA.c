#include <stdio.h>
#define MAX 20

typedef struct {
    int stcode;  char name[30];
    float gpa;
} Student;

Student maxStudent(Student s[ ], int n);
float average(Student s[ ], int n);

int main() {
    Student stds[MAX];
    Student maxSt;
    int n, i;
    float avg;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &stds[i].stcode);  
        scanf("%s", stds[i].name);
        scanf("%f", &stds[i].gpa);
    }

    maxSt = maxStudent(stds, n);
    printf("Max GPA is %.2f %s\n", maxSt.gpa, maxSt.name);
    
    avg = average(stds, n );
    printf("Average GPA is %.2f\n", avg);

    return 0;
}

Student maxStudent(Student s[], int n) {
    int i, max_index = 0;
    float max = s[0].gpa;
    
    for(i = 1; i < n; i++) {
        if(s[i].gpa > max) {
            max = s[i].gpa;
            max_index = i;
        }
    }
    
    return s[max_index];
}

float average(Student s[], int n) {
    int i;
    float sum = 0, avg;
    
    for(i = 0; i < n; i++) {
        sum += s[i].gpa;
    }
    
    avg = sum / n;
    
    return avg;
}
