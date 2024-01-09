#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key,i;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = -1;

    // Linear search without a separate function
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;  // Element found, update index
            break;      // Exit the loop since the element is found
        }
    }

    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

