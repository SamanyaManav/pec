#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], copiedString[100], concatenatedString[200];
    int i;

    // Accept a string input from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str1);  // Allowing spaces in the input string

    // Display the length of the entered string
    printf("\nLength of the entered string: %lu\n", strlen(str1));
	printf("\nReverse of the string: %s\n\n",strrev(str1));
    // Copy the entered string to another string
    strcpy(copiedString, str1);
    // Display the copied string
    printf("Copied String: %s\n\n", copiedString);

    // Concatenate and display two strings
    printf("\nEnter strings for concatination: ");
    printf("\nString 1: ");
    scanf("%s", str1);  
    printf("String 2: ");
    scanf("%s", str2); 
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // Compare two strings
    printf("\nEnter strings for comparison: ");
    printf("\nString 1: ");
    scanf("%s", str1); 
    printf("String 2: ");
    scanf("%s", str2);  
  
    int comparisonResult = strcmp(str1, str2);
    printf("Strings are %s.\n", (comparisonResult == 0) ? "equal" : "not equal");

    printf("\n");

    return 0;
}

