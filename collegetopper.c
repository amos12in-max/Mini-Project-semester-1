#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    // Reading marks of 5 students in 3 subjects
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int highestMath = marks[0][0];
    int highestPhysics = marks[0][1];
    int highestCS = marks[0][2];

    // Finding highest marks for each subject
    for (i = 1; i < 5; i++) {
        if (marks[i][0] > highestMath)
            highestMath = marks[i][0];

        if (marks[i][1] > highestPhysics)
            highestPhysics = marks[i][1];

        if (marks[i][2] > highestCS)
            highestCS = marks[i][2];
    }

    // Output results
    printf("Highest marks in Mathematics: %d\n", highestMath);
    printf("Highest marks in Physics: %d\n", highestPhysics);
    printf("Highest marks in Computer Science: %d\n", highestCS);

    return 0;
}
