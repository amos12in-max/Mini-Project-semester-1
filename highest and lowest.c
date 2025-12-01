#include <stdio.h>

int main() {
    int n, i;
    float marks, highest, lowest;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of subjects.\n");
        return 0;
    }

    printf("Enter mark for subject 1: ");
    scanf("%f", &marks);

    highest = marks;
    lowest = marks;

    for (i = 2; i <= n; i++) {
        printf("Enter mark for subject %d: ", i);
        scanf("%f", &marks);

        if (marks > highest)
            highest = marks;

        if (marks < lowest)
            lowest = marks;
    }

    printf("\nHighest mark = %.2f\n", highest);
    printf("Lowest mark = %.2f\n", lowest);

    return 0;
}
