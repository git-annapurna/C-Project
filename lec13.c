//Rotate the array to the left by one position
//Check whether the array is palindrome
//Find pair with sum k=7
#include <stdio.h>

int main() {
    int arr[5] = {-10, 2, 30, -40, 5};

    // Rotate left by one position
    int f = arr[0];
    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
    arr[4] = f;

    // Print rotated array
    printf("Rotated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check palindrome
    int check = 1;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - 1 - i]) {
            check = 0;
            break;
        }
    }

    if (check == 1) {
        printf("Palindrome array \n");
    } else {
        printf("Array not palindrome !)\n");
    }

    // Find pairs with sum = 7
    int k = 7;
    printf("Pairs with sum %d:\n", k);
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == k) {
                printf("arr[%d] + arr[%d] = %d + %d = %d\n",
                       i, j, arr[i], arr[j], k);
            }
        }
    }

    return 0;
}
