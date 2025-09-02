#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcm_recursive(int a, int b, int current) {
    if (current % a == 0 && current % b == 0)
        return current;
    return lcm_recursive(a, b, current + 1);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int start = max(a, b);
    int result = lcm_recursive(a, b, start);
    printf("LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
