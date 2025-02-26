// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    
    scanf("%d", &n); // Taking input for the size of the square

    for(i = 1; i <= n; i++) { // Loop for rows
        for(j = 1; j <= n; j++) { // Loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
