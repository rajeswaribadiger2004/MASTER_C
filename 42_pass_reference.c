#include <stdio.h>

void changeValue(int *x) {
    *x = 100; // Changes value at the original address
}

int main() {
    int num = 5;
    changeValue(&num);
    printf("num = %d\n", num); // Output: num = 100
    return 0;
}

//Instead of a copy, the function gets the address (reference) of the variable
//Changes made inside the function do affect the original variable.
