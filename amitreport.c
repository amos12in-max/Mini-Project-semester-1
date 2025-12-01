#include <stdio.h>

int main() {
    int n, i;
    
    // Read number of subjects
    scanf("%d", &n);
    
    int marks[n];
    
    // Read n marks
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    
    // Initialize highest and lowest with the first mark
    int highest = marks[0];
    int lowest = marks[0];
    
    // Find highest and lowest marks
    for (i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    
    // Output
    printf("Highest = %d\n", highest);
    printf("Lowest = %d\n", lowest);
    
    return 0;
}
