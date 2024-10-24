#include <stdio.h>

int funtorial(int n, int i) {
    if (n == 1) return 1;
    if (i) return n * funtorial(n-1, 0);
    return n + funtorial(n-1, 1);
}

int digitSum(int n) {
    if (n < 10) return n;
    return n%10 + digitSum(n/10);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int isPseudoFuntorialPrime(int n) {
    return isPrime(digitSum(funtorial(n, 1)));
}

int main() {
    int n; scanf("%d", &n);
    puts(isPseudoFuntorialPrime(n) ? "YES" : "NO");
}
