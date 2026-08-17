#include <stdio.h>

typedef struct _time {
    int hours;
    int minutes;
    int seconds;
} TIME;

void time_diff(TIME t1, TIME t2, TIME *diff);

int main() {
    TIME t1, t2, diff;

    printf("Enter time1 (hour, min, sec): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter time2 (hour, min, sec): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    time_diff(t1, t2, &diff);
    printf("Duration: %d hour(s), %d min(s), %d sec(s)\n", \
        diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void time_diff(TIME t1, TIME t2, TIME *diff) {
    long t1_total_sec = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    long t2_total_sec = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    long diff_sec = t1_total_sec - t2_total_sec;
    if (diff_sec < 0) {
        diff_sec = -diff_sec;
    }
    
    diff->hours = diff_sec / 3600;
    diff_sec %= 3600;
    
    diff->minutes = diff_sec / 60;
    diff->seconds = diff_sec % 60;
}
