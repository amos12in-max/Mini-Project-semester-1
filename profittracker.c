#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int records[n];

    // Read daily profit/loss values
    for (i = 0; i < n; i++) {
        scanf("%d", &records[i]);
    }

    int totalProfit = 0, totalLoss = 0;

    // Calculate profit and loss
    for (i = 0; i < n; i++) {
        if (records[i] > 0) {
            totalProfit += records[i];
        } else if (records[i] < 0) {
            totalLoss += (-records[i]);  // convert loss to positive
        }
    }

    int netBalance = totalProfit - totalLoss;

    // Output the results
    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);

    return 0;
}
