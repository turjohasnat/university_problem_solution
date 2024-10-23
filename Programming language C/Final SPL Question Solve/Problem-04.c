#include <stdio.h>

int is_even_sum_greater(int n, int evenSum, int oddSum) {
    int d = n%10;
    if (d % 2) oddSum += d;
    else       evenSum += d;
    if (n < 10)
        return evenSum > oddSum;
    return is_even_sum_greater(n/10, evenSum, oddSum);
}

int prime_checker(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int even_powered_number(int n) {
    return is_even_sum_greater(n, 0, 0) && prime_checker(n);
}

void find_even_powered_prime_number (int start, int end) {
    for (; start <= end; start++)
        if (even_powered_number(start))
            printf("%d\n", start);
}

int main() {
    int a, b; scanf("%d %d", &a, &b);
    find_even_powered_prime_number(a, b);
}
