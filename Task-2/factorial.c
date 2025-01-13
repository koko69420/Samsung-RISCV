#include <stdio.h>

int main() {
    int n = 15, i;
    unsigned long long factorial = 1;


    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", n, factorial);

    return 0;
}