#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    srand(time(NULL));  // Seed for different results each run

    printf("Five random numbers between 1 and 100000\n");

    for (i = 1; i <= 5; i++)
    {
        n = rand() % 100000 + 1;
        printf("%d\n", n);
    }

    return 0;
}
