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
