// Your code here...
#include <stdio.h>

int main() {
    int k, a[50];
    
    scanf("%d", &k);

    // Read the array elements
    for (int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize max and min with the first element
    int max = a[0], min = a[0];

    // Loop through the array to find max and min
    for (int i = 1; i < k; i++) {  // Start from index 1, since index 0 is already assigned
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    // Print min and max
    printf("%d %d\n", min, max);

    return 0;
}
