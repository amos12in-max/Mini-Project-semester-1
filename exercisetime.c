#include<stdio.h>
int main() {
int n, i;

printf("Enter the number of days: ");
scanf("%d", &n);

int times[n];

printf("Enter exercises time(in minutes):\n");
for(i = 0; i < n; i++) {
    scanf("%d", &times[i]);

    printf("Reversed exercises times:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", times[i]);
    }
    }
    return 0;
}
