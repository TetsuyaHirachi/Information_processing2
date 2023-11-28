#include <stdio.h>
int main(void) {
    int i = 0;
    char s[10], t[10];
    scanf("%s", s);
    do {
        t[i] = s[i];
    } while (s[i++] != '\0');

    printf("s = %s, t = %s\n", s, t);

    if (t[i] == '\0') {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
