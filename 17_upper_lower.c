#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char str[25]; 
int i; 
printf("Enter the string: \n"); 
scanf("%s",str); 
for(i=0;i<=strlen(str);i++) 
{ 
if(str[i]>=65&&str[i]<=90)               //A-B(65-90)   //a-b(97-122)
str[i]=str[i]+32; 
} 
printf("\nLower Case String is: %s\n",str); 
return 0; 
} 
