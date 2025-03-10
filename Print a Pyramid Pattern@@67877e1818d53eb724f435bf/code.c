// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Taking user input for number of rows
    printf("");
    scanf("%d", &rows);

    // Loop to print the pyramid
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
