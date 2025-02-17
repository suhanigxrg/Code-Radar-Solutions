#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } 
    // Check if the character is an uppercase or lowercase letter
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it's a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    // If not a digit or letter, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
