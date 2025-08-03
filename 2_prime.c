#include<stdio.h>
int main()
{
    int n, i, m;
    printf("Enter number to check prime or not\n");
    scanf("%d", &n);

    if(n < 2) {
        printf("Number is NOT prime\n");
        return 0;
    }

    m = n / 2;                                         //OPTIMIZATION
    for(i = 2; i <= m; i++) {
        if(n % i == 0) {
            printf("Number is NOT prime\n");
            return 0;
        }
    }

    printf("Number is prime\n");
    return 0;
}
