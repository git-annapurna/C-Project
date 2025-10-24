//Basic concepts
#include <stdio.h>
int main()
{
    // Taking input from user
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("You have entered: %d\n", a);

    // Arithmetic Operators
    int x = 13, y = 8;
    printf("x + y = %d\n", x + y);   // Addition
    printf("x - y = %d\n", x - y);   // Subtraction
    printf("x * y = %d\n", x * y);   // Multiplication
    printf("x / y = %d\n", x / y);   // Division (integer)
    printf("x %% y = %d\n", x % y); // Modulus (remainder)

    // Type Casting (decimal result in division)
    float result = (float)x / y;  // explicit type casting
    printf("Type casted division: %.2f\n", result);

    // Incrementing and Decrementing
    int num = 5;
    printf("num = %d\n", num);
    printf("num++ = %d\n", num++); // prints the initial value ,then increases
    printf("num = %d\n", num);
    printf("++num = %d\n", ++num); // prints the incremented value
    printf("num = %d\n", num);

    // If-Else
    int marks = 80;
    if (marks >= 75) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else {
        printf("Fail\n");
    }

    // size of operator
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n", sizeof(char));

    // ASCII value
    int ascii = 65;
    char ch = ascii;  // int to char
    printf("ASCII value of %d ='%c'\n", ascii, ch);

    return 0;
}