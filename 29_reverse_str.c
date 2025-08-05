#include <stdio.h>

int main()
{
    char s[30] = "Hello";
    int i = 0, j, temp;

    // Find length manually
    while(s[i] != '\0')
        i++;
    
    j = i - 1; // index of last character
    i = 0;     // index of first character

    // Reverse using two-pointer technique
    while(i < j)
    {
        temp = s[i];
        s[i] =  s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", name);

    return 0;
}
