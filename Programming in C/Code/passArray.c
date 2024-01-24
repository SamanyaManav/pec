#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0,i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Declare and initialize an array
    int myArray[] = {2, 4, 6, 8, 10};
    int i;

    // Determine the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Calculate the sum by calling the function
    int sum = calculateSum(myArray, size);

    // Display the original array
    printf("Original Array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", myArray[i]);
    }

    // Display the sum of array elements
    printf("\nSum of Array Elements: %d\n", sum);

    return 0;
}

