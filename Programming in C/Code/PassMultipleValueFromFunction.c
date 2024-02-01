#include <stdio.h>

// Function to calculate sum and product of two numbers using pointers
void calculateSumAndProduct(int a, int b, int *sum, int *product) {
    // Calculate sum and product and store the results through pointers
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1, num2, sum, product;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the function with pointers to get sum and product
    calculateSumAndProduct(num1, num2, &sum, &product);

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

