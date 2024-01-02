#include <stdio.h>

int main() {
    // Constants for electricity rates and meter charge
    const int rate1 = 40;  // Rs per unit for the first 100 units
    const int rate2 = 50;  // Rs per unit for the next 200 units
    const int rate3 = 60;  // Rs per unit beyond 300 units
    const int meterCharge = 50;  // Rs meter charge

    // Variables
    int unitsConsumed;
    int totalCharge = 0;

    // Input: Number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate total charges
    if (unitsConsumed <= 100) {
        totalCharge = unitsConsumed * rate1;
    } else if (unitsConsumed <= 300) {
        totalCharge = 100 * rate1 + (unitsConsumed - 100) * rate2;
    } else {
        totalCharge = 100 * rate1 + 200 * rate2 + (unitsConsumed - 300) * rate3;
    }

    // Add meter charge
    totalCharge += meterCharge;

    // Output: Total charges
    printf("Total charges: Rs %d\n", totalCharge);

    return 0;
}

