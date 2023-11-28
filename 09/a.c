#include <stdio.h>
int main(void) {
    char s[10], t[10];
    char *p, *q;
    s[0] = 'a';
    p = s;
    q = t;
    *q = *p;
    printf("%c", t[0]);

    return 0;
}