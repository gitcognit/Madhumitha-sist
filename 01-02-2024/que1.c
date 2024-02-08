#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int maxLength = 0;
    int start = 0; // Starting index of current substring
    int charIndex[128]; // Store the last index of each character

    memset(charIndex, -1, sizeof(charIndex)); // Initialize charIndex with -1

    for (int end = 0; s[end] != '\0'; end++) {
        // If the current character is already present in the substring,
        // update the start index to the next position of the last occurrence of this character.
        if (charIndex[s[end]] >= start)
            start = charIndex[s[end]] + 1;

        // Update the index of the current character
        charIndex[s[end]] = end;

        // Update the maximum length
        if (end - start + 1 > maxLength)
            maxLength = end - start + 1;
    }

    return maxLength;
}

int main() {
    char s[] = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);
    return 0;
}
