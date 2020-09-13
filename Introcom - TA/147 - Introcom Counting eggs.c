#include <stdio.h>
#include <stdlib.h>
#define WEEK 4
#define DAY 7

int main() {
    int egg[WEEK][DAY], i, j;
    int week_sum = 0, day_sum = 0, max_day, max_day_index;
    char day[DAY][20] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    for(i = 0; i < WEEK; i++) {
        for(j = 0; j < DAY; j++) {
            scanf("%d", &egg[i][j]);
        }
    }
    
    for(i = 0; i < WEEK; i++) {
        for(j = 0; j < DAY; j++) {
            week_sum += egg[i][j];
        }
        printf("Week %d: %d\n", i + 1, week_sum);
        week_sum = 0;
    }
    
    for(j = 0; j < DAY; j++) {
        for(i = 0; i < WEEK; i++) {
            day_sum += egg[i][j];
        }
        if(j == 0) {
            max_day = day_sum;
            max_day_index = j;
        }
        else {
            if(day_sum > max_day) {
                max_day = day_sum;
                max_day_index = j;
            }
        }
        day_sum = 0;
    }
    
    printf("Max day: %s %d", day[max_day_index], max_day);
    
    exit(EXIT_SUCCESS);
}
