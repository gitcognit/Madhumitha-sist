#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void time_conversion(char s[]) {
    int hour, minute, second;
    char period[3];

    sscanf(s, "%d:%d:%d%s", &hour, &minute, &second, period);

    if (strcmp(period, "PM") == 0 && hour != 12) {
        hour = (hour + 12) % 24;
    } else if (strcmp(period, "AM") == 0 && hour == 12) {
        hour = 0;
    }

    printf("%02d:%02d:%02d\n", hour, minute, second);
}

int main() {
    char s[20];
    fgets(s, sizeof(s), stdin);
    s[strlen(s) - 1] = '\0'; // Remove the newline character from fgets input

    time_conversion(s);

    return 0;
}
