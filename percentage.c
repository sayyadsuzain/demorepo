#include <stdio.h>

int main() {
    int numbers[5]; // Declare an array of 5 integers

    // Taking input from the user to fill the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]); // Store each entered value in the array
    }

    // Printing the elements of the array
    printf("\nYou entered the following elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}