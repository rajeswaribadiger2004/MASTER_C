#include <stdio.h>
int main()
{
 int num, n, bitStatus;
 printf("Enter any number: ");
 scanf("%d", &num);
 printf("Enter nth bit to check (0-31): ");
 scanf("%d", &n);
 bitStatus = (num >> n) & 1;
 printf("The %d bit is set to %d", n, bitStatus);
 return 0;
}
//num = 16, which is 0001 0000. The 2nd bit is 0.

// num >> 2 → 0000 0100

// & 1 → 0000 0000 → result = 0

// So bitStatus = 0
