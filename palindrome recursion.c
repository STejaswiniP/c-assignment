#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;  // Base case: all characters checked
    if (str[start] != str[end])
        return 0;  // Characters don't match
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
