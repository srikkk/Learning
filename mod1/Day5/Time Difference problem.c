// Time Difference problem

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time TimeDifference(struct Time start, struct Time end) {
    struct Time difference;
    
    // Convert everything to seconds
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;
    int timeDifferenceInSeconds = endTimeInSeconds - startTimeInSeconds;
    
    // Convert back to hours, minutes, and seconds
    difference.hours = timeDifferenceInSeconds / 3600;
    timeDifferenceInSeconds %= 3600;
    difference.minutes = timeDifferenceInSeconds / 60;
    difference.seconds = timeDifferenceInSeconds % 60;
    
    return difference;
}

int main() {
    struct Time startTime, endTime, difference;
    
    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    
    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    
    difference = TimeDifference(startTime, endTime);
    
    printf("\nTime Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);
    
    return 0;
}
