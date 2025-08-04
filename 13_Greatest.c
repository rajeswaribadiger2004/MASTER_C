#include<stdio.h> 
int main() 
{ 
int a,b,c;
printf("\nEnter value of a,b,c:\n"); 
scanf("%d %d %d",&a,&b,&c); 
if((a>b)&&(a>c)) 
printf("\n Number1 is greatest\n"); 
else if((b>c)&&(b>a)) 
printf("\n Number2 is greatest\n"); 
else 
printf("\n Number3 is greatest\n"); 
return 0; 
}
