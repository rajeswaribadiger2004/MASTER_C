#include<stdio.h>
int main()
{
int i;
int fact=1;
int number;
printf("Enter a number: \n");
scanf("%d",&number);
for(i = 1; i <= number; i++)
{
fact=fact*i;
}
printf("Factorial of %d is: %d\n",number,fact);
return 0;
}


//RECURSION
#include<stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(number);
        printf("Factorial of %d is: %d\n", number, fact);
    }

    return 0;
}


