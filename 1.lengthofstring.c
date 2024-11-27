#include <stdio.h>

int string_length(const char *str) {
    int length = 0;

    // Iterate through the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100]; // Array to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string (includes spaces)

    // Calculate the length of the string
    int length = string_length(str);

    // Remove newline character if present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}

