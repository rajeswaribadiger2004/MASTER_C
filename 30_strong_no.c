#include<stdio.h>

int main()
{
    int num, i, fact, r, sum = 0, temp;
    printf("Please enter a number to check if it's a strong number: ");
    scanf("%d", &num);
    temp = num;

    while(num)
    {
        i = 1;
        fact = 1;
        r = num % 10;

        while(i <= r)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if(sum == temp)
        printf("%d is a Strong number.\n", temp);
    else
        printf("%d is NOT a Strong number.\n", temp);

    return 0;
}


//
#include<stdio.h>

int main()
{
  int fact,i,sum,temp,r;
printf("enter num");
scanf("%d",num);
temp=num;
while(num)
{
fact=1;
i=1;
r=num%10;
while(i<=r)
{
sum+=num;
num/=10;
}

