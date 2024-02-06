#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 10000
#define ALPHABET_SIZE 26

int min_changes_to_anagram(char *s) {
    int len = strlen(s);
    
    // Check if the length of the string is odd
    if (len % 2 != 0) {
        return -1; // Cannot split into two substrings of equal length
    }
    
    // Count the frequency of each character in the first half of the string
    int freq[ALPHABET_SIZE] = {0};
    for (int i = 0; i < len / 2; i++) {
        freq[s[i] - 'a']++;
    }
    
    // Count the frequency of each character in the second half of the string
    for (int i = len / 2; i < len; i++) {
        freq[s[i] - 'a']--;
    }
    
    // Calculate the total number of changes needed
    int changes_needed = 0;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq[i] > 0) {
            changes_needed += freq[i];
        }
    }
    
    return changes_needed;
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        char s[MAX_LENGTH];
        scanf("%s", s);

        int result = min_changes_to_anagram(s);
        printf("%d\n", result);
    }

    return 0;
}
