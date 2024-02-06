#include <stdio.h>

void findpoint(int px, int py, int qx, int qy, int *rx, int *ry) {
    *rx = 2 * qx - px;
    *ry = 2 * qy - py;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int px, py, qx, qy;
        scanf("%d %d %d %d", &px, &py, &qx, &qy);

        int rx, ry;
        findpoint(px, py, qx, qy, &rx, &ry);
        printf("%d %d\n", rx, ry);
    }

    return 0;
}
