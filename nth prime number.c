#include <stdio.h>

int main() {
    int n, i, count = 0, isPrime = 1, num = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n) {
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            count++;
        }
        num++;
    }
    printf("The %dth prime number is %d", n, num-1);
    return 0;
}
