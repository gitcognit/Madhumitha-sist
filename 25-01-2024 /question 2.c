#include <stdio.h>

int connectingTowns(int n, int routes[]) {
    long long total_routes = 1;
    int modulo_value = 1234567;

    for (int i = 0; i < n - 1; i++) {
        total_routes = (total_routes * routes[i]) % modulo_value;
    }

    return (int)total_routes;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int routes[n-1];
        for (int i = 0; i < n - 1; i++) {
            scanf("%d", &routes[i]);
        }

        int result = connectingTowns(n, routes);
        printf("%d\n", result);
    }

    return 0;
}
