#include <stdio.h>
int main(void) {
    int x[2];
    printf("%p,%p", x, x + 1);
    return 0;
}