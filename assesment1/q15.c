// Input a string from the user. Count occurrences (case insensitive) of
// each alphabet in the string.





#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];
    int count[26] = {0}; // Array to store the count of each alphabet

    printf("Enter a string: ");
    scanf("%[^\n]s", inputString);

    for (int i = 0; i < strlen(inputString); i++) {
        if (isalpha(inputString[i])) {
            int index = tolower(inputString[i]) - 'a';
            count[index]++;
        }
    }
    printf("Occurrences of each alphabet in the string:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
