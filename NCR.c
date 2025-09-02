#include <stdio.h>
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}
unsigned long long nCr(int n, int r) {
    if (r < 0 || n < 0 || r > n)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    printf("%dC%d = %llu\n", n, r, nCr(n, r));
    return 0;
}
