#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Input temperature
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    // Perform temperature conversion based on user choice
    switch (choice) {
        case 1:
            // Celsius to Fahrenheit conversion
            convertedTemperature = (temperature * 9 / 5) + 32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, convertedTemperature);
            break;

        case 2:
            // Fahrenheit to Celsius conversion
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, convertedTemperature);
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

