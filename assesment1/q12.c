// Write a Program to reverse the letters present in the given String. Do
//not use strrev() function



#include <stdio.h>
#include <string.h>

// Function to reverse a string without using strrev()
void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", inputString);

    // Reversing the input string
    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
