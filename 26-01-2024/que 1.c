#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the best divisor
int find_best_divisor(int n) {
    int best_divisor = 1;
    int best_sum = sum_of_digits(best_divisor);
    
    for (int divisor = 2; divisor <= n; divisor++) {
        if (n % divisor == 0) {
            int divisor_sum = sum_of_digits(divisor);
            if (divisor_sum > best_sum || (divisor_sum == best_sum && divisor < best_divisor)) {
                best_divisor = divisor;
                best_sum = divisor_sum;
            }
        }
    }
    
    return best_divisor;
}

int main() {
    // Read input
    int n;
    scanf("%d", &n);

    // Find the best divisor
    int result = find_best_divisor(n);

    // Print the result
    printf("%d\n", result);

    return 0;
}
