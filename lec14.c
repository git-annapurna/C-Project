//Sliding window approach
#include <stdio.h>

int maxArraySum(int arr[], int n, int k) {
    int wSum = 0;

    // Sum of first k elements
    for (int i = 0; i < k; i++) {
        wSum += arr[i];
    }

    int maxSum = wSum;

    // Sliding window
    for (int j = k; j < n; j++) {
        wSum = wSum + arr[j] - arr[j - k]; // add next element, remove first element of previous window
        if (wSum > maxSum) {
            maxSum = wSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[7] = {-1, 2, 4, 5, 4, 3, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int data = maxArraySum(arr, n, k);
    printf("%d\n", data);

    return 0;
}



    
//Sliding window and Brute force approach
#include <stdio.h>
int main() {
    int arr[7] = {1, 2, 3, 5, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Sliding window approach
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    int maxSum = windowSum;

    for (int j = k; j < n; j++) {
        windowSum = windowSum + arr[j] - arr[j - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }
    printf("Max sum (sliding window) = %d\n", maxSum);

    // Brute force approach
    int maxSumBF = 0;
    for (int i = 0; i <= n - k; i++) {
        int currSum = 0;
        for (int j = i; j < i + k; j++) {
            currSum += arr[j];
        }
        if (currSum > maxSumBF) {
            maxSumBF = currSum;
        }
    }
    printf("Max sum (brute force) = %d\n", maxSumBF);

    //find a target in array
    int target = 5;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Target %d found at index %d\n", target, i);
            break;
        }
    }
    return 0;
}