#include <stdio.h>

void changeValue(int x) {
    x = 100; // Only changes local copy
}

int main() {
    int num = 5;
    changeValue(num);
    printf("num = %d\n", num); // Output: num = 5
    return 0;
}

// A copy of the variable’s value is passed
//Changes made inside the function do not affect the original variable.
