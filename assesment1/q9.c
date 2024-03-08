// Accept an integer number and when the program is executed print the
// binary, octal and hexadecimal equivalent of the given number


#include <stdio.h>

int main() {
   int num;

    // Accept an integer number
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Print binary equivalent
   printf("Binary equivalent: %d in binary is %ld\n", num, convertToBinary(num));

    Print octal equivalent
    printf("Octal equivalent: %d in octal is %o\n", num, num);

    Print hexadecimal equivalent
    printf("Hexadecimal equivalent: %d in hexadecimal is %X\n", num, num);

    return 0;
}




