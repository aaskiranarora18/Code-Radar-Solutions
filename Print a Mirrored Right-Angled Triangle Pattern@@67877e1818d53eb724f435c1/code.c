// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Taking user input for number of rows
    printf("");
    scanf("%d", &rows);

    // Loop to print the mirrored right-angled triangle
    for (i = 1; i <= rows; i++) {
        // Printing spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Printing stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
