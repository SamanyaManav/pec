#include <stdio.h>
#include <string.h>

void insertCharAtIndex(char str[], char ch, int index) {
    int len = strlen(str);
    int i;

    // Check if the index is valid
    if (index < 0 || index > len) {
        printf("Invalid index\n");
        return;
    }

    // Shift characters to the right to make space for the new character
    for (i = len; i > index; i--) {
        str[i] = str[i - 1];
    }

    // Insert the new character at the specified index
    str[index] = ch;

    // Display the modified string
    printf("Resulting string after inserting '%c' at index %d: %s\n", ch, index, str);
}

int main() {
    char inputString[100];
    char insertChar;
    int insertIndex;

	  // Accept input from the user
	printf("Enter a string: ");
	scanf(" %99[^\n]", inputString);  // Consume newline character
	
	printf("Enter a character to insert: ");
	scanf(" %c", &insertChar);  // Consume newline character
	
	printf("Enter the index to insert at: ");
	scanf("%d", &insertIndex);


    // Call the function to insert the character
    insertCharAtIndex(inputString, insertChar, insertIndex);
	getch();
    return 0;
}

