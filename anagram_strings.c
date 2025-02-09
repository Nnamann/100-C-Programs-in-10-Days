#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int cnt1[256] = {0}, cnt2[256] = {0};

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline character from fgets
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    // Check if lengths are different
    if (strlen(a) != strlen(b)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count character frequencies for both strings
    for (int i = 0; a[i] != '\0'; i++) {
        cnt1[a[i]]++;
        cnt2[b[i]]++;
    }

    // Compare character counts
    for (int i = 0; i < 256; i++) {
        if (cnt1[i] != cnt2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}