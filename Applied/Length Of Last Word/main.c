#include <stdio.h>

int lengthOfLastWord(char *s) {
    int length = 0;
    int i = 0;
    
    // Skip trailing spaces
    while (s[i] != '\0') {
        i++;
    }
    i--; // Move to the last non-null character

    while (i >= 0 && s[i] == ' ') {
        i--; // Skip trailing spaces
    }

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    char s1[] = "Hello World";
    char s2[] = "   fly me   to   the moon  ";
    char s3[] = "luffy is still joyboy";

    printf("Length of last word in \"%s\": %d\n", s1, lengthOfLastWord(s1));
    printf("Length of last word in \"%s\": %d\n", s2, lengthOfLastWord(s2));
    printf("Length of last word in \"%s\": %d\n", s3, lengthOfLastWord(s3));

    return 0;
}
