#include <stdio.h>
int main()
{
 int num, n, newNum;
 printf("Enter any number: ");
 scanf("%d", &num);
 printf("Enter nth bit to toggle (0-31): ");
 scanf("%d", &n);
 newNum = num ^ (1 << n);
 printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
 printf("Number after toggling %d bit: %d (in decimal)\n", n, newNum);
 return 0;
}


//bitStatus = (num >> n) & 1;       set nth bit
//newNum = (1 << n) | num;          get of bits
// newNum = num ^ (1 << n);         toggle
