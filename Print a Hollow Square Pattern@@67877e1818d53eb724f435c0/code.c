// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;

    // Taking user input for square size
    printf("");
    scanf("%d", &n);

    // Loop to print the hollow square
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print '*' for the border, otherwise print space
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
