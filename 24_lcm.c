#include <stdio.h>

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2, lcm;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &n1, &n2);

    int resultGCD = gcd(n1, n2);
    lcm = (n1 * n2) / resultGCD;

    printf("The LCM of %d and %d is %d.\n", n1, n2, lcm);

    return 0;
}
