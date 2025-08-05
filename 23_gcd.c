#include <stdio.h>

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    // If input is negative, convert to positive (GCD is always positive)
    if (n1 < 0) n1 = -n1;
    if (n2 < 0) n2 = -n2;
    printf("G.C.D of %d and %d is %d\n", n1, n2, gcd(n1, n2));
    return 0;
}

// int gcd(int a, int b) {
//     return (b == 0) ? a : gcd(b, a % b);
// }
