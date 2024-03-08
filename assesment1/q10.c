// Read at most 10 names of students and store them into an array of
//char nameOfStudents[10][50]. Sort the array and display them back. Hint:
//Use qsort() method.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char nameOfStudents[10][50];
    int i, numNames;

    printf("Enter the number of names (up to 10): ");
    scanf("%d", &numNames);

    if (numNames > 10) {
        printf("Number of names exceeds the limit.\n");
        return 1;
    }
    
    printf("Enter the names:\n");
    for (i = 0; i < numNames; i++) {
        scanf("%s", nameOfStudents[i]);
    }

    // Sorting the array of names
    qsort(nameOfStudents, numNames, sizeof(nameOfStudents[0]), compare);

    // Displaying the sorted names
    printf("\nSorted names:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
