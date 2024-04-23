#include <stdio.h>

int main() {
    char roman[100];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int romanValues[256] = {['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50, ['C'] = 100, ['D'] = 500, ['M'] = 1000};

    int result = 0;
    for (int i = 0; roman[i] != '\0'; i++) {
        if (roman[i+1] != '\0' && romanValues[roman[i]] < romanValues[roman[i+1]]) {
            result -= romanValues[roman[i]];
        } else {
            result += romanValues[roman[i]];
        }
    }

    printf("Integer value: %d\n", result);

    return 0;
}
