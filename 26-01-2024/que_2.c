#include <stdio.h>

int average_candies(int n, int m, int operations[][3]) {
    long long total_candies = 0; // Using long long to avoid overflow
    for (int i = 0; i < m; i++) {
        int a = operations[i][0];
        int b = operations[i][1];
        int k = operations[i][2];
        total_candies += (long long)(b - a + 1) * k; // Increment total_candies
    }
    return (int)(total_candies / n); // Return the floor of the average
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int operations[m][3];
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &operations[i][0], &operations[i][1], &operations[i][2]);
    }

    int result = average_candies(n, m, operations);
    printf("%d\n", result);

    return 0;
}
