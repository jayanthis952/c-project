#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long fact = 1;

    printf("\nEnter a positive integer: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return;
    }

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", n, fact);
}

