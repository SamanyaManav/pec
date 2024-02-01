#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,j,temp;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }

    // Selection Sort: Sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            // Swap if the element found is greater than the next element
            if (*(arr+i) > *(arr+j)) {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }

    // Deallocate the dynamically allocated memory
    free(arr);

    return 0;
}


