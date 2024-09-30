#include <stdio.h>

int abs(int n) {
    return (n < 0) ? -n : n;
}

int main() {

    printf("abs(5) = %d\n", abs(5));
    printf("abs(-5) = %d\n", abs(-5));
    printf("abs(0) = %d\n", abs(0)); 
    return 0;
}