// Declare an Array of type char* and initialize it with a few strings (hard-
// coded). Display the strings which are duplicated in that array. (Hint: use
// strcmp())



#include <stdio.h>
#include <string.h>

int main() {
    char* strings[] = {"apple", "banana", "apple", "orange", "banana", "grape"};
    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Duplicate strings in the array:\n");

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break;
            }
        }
    }

    return 0;
}
