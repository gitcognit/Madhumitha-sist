#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int prices2[] = {7, 6, 4, 3, 1};
    
    int max_profit1 = maxProfit(prices1, sizeof(prices1) / sizeof(prices1[0]));
    int max_profit2 = maxProfit(prices2, sizeof(prices2) / sizeof(prices2[0]));

    printf("Maximum profit for example 1: %d\n", max_profit1);
    printf("Maximum profit for example 2: %d\n", max_profit2);

    return 0;
}
