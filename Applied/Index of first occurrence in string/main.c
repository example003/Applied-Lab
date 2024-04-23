#include <stdio.h>

int indexOfFirstOccurrence(char *str, char target) {
    int index = -1; // Initialize index to -1 (indicating not found)
    
    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            index = i; // Update index if target character found
            break;     // Break the loop once the first occurrence is found
        }
    }
    
    return index;
}

int main() {
    char str[] = "hello world";
    char target = 'o';
    
    int index = indexOfFirstOccurrence(str, target);
    
    if (index != -1) {
        printf("The first occurrence of '%c' is at index %d\n", target, index);
    } else {
        printf("The character '%c' was not found in the string.\n", target);
    }
    
    return 0;
}
