#include<stdio.h>   
int main()     
{     
int n; 
int sum=0; 
int m;     
printf("Enter number:\n");     
scanf("%d",&n);     
while(n>0)     
{     
m = n%10;     
sum = sum+m;     
n = n/10;     
}     
printf("Sum is = %d\n",sum);     
return 0;   
}
