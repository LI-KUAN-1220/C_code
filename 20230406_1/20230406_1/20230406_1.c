#include <stdio.h>

int main() {
    int x = 5;      // Declare an integer variable x and assign it the value 5
    float y = 3.14; // Declare a floating-point variable y and assign it the value 3.14
    char c = 'a';   // Declare a character variable c and assign it the value 'a'

    printf("The value of x is %d.\n", x);    // Print the value of x using a format specifier
    printf("The value of y is %.2f.\n", y); // Print the value of y with 2 decimal places
    printf("The value of c is %c.\n", c);   // Print the value of c

    if (x > y) {                             // Use an if statement to compare x and y
        printf("x is greater than y.\n");
    }
    else {
        printf("y is greater than x.\n");
    }

    int i;
    for (i = 0; i < x; i++) {               // Use a for loop to print the numbers from 0 to x-1
        printf("%d ", i);
    }
    printf("\n");                          // Print a newline character to end the line

    return 0;                              // Return 0 to indicate successful completion of the program
}
