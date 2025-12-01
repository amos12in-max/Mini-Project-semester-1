#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    // Input attendance for 10 students and 7 days
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int totalPresent[10] = {0};
    int highestAttendance = 0;
    int studentWithHighest = 1;

    // (a) Calculate total present days for each student
    for (i = 0; i < 10; i++) {
        int sum = 0;
        for (j = 0; j < 7; j++) {
            sum += A[i][j];
        }
        totalPresent[i] = sum;

        // Track student with highest attendance
        if (sum > highestAttendance) {
            highestAttendance = sum;
            studentWithHighest = i + 1;  // student numbers 1–10
        }
    }

    // (b) Find the day with lowest overall attendance
    int dayTotals[7] = {0};
    for (j = 0; j < 7; j++) {
        for (i = 0; i < 10; i++) {
            dayTotals[j] += A[i][j];
        }
    }

    int lowestDay = 1;
    int lowestAttendance = dayTotals[0];

    for (j = 1; j < 7; j++) {
        if (dayTotals[j] < lowestAttendance) {
            lowestAttendance = dayTotals[j];
            lowestDay = j + 1;  // days numbered 1–7
        }
    }

    // ----------------------------
    // OUTPUT SECTION
    // ----------------------------
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, totalPresent[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           studentWithHighest, highestAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", lowestDay);

    return 0;
}
