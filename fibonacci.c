#include <stdio.h>

#define MAX 100  // Define a maximum size for memoization

long long memo[MAX];  // Array to store computed Fibonacci numbers

// Function to compute Fibonacci using memoization
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    // If value is already computed, return it
    if (memo[n] != -1) {
        return memo[n];
    }
    // Compute and store the result in memo array
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

// Main function to test Fibonacci
int main() {
    int n = 10; // Example input

    // Initialize memo array with -1 (indicating uncomputed values)
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }

    printf("Fibonacci of %d is: %lld\n", n, fibonacci(n));

    return 0;
}
