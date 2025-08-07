#include <stdio.h>
int main()
{
 int num;
 printf("Enter any number: ");
 scanf("%d", &num);
 if(num & 1)                                      //odd &1 ==1   //even & 1==0
 {
 printf("%d is odd.", num);
 }
 else
 {
 printf("%d is even.", num);
 }
 return 0;
}
