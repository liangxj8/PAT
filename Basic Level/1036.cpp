#include <cstdio>
int main()
{
    int i, j;
    int a, b;
    char ch;

    scanf("%d %c", &a, &ch);
    for (i = 0; i < a; i++) {
        printf("%c", ch);
    }
    printf("\n");
    // be care of rounding
    if (a % 2 == 0) {
        b = a / 2 - 2;
    } else {
        b = a / 2 - 1;
    }
    for (i = 0; i < b; i++) {
        printf("%c", ch);
        for (j = 0; j < a - 2; j++) {
            printf(" ");
        }
        printf("%c\n", ch);
    }
    for (i = 0; i < a; i++) {
        printf("%c", ch);
    }

    return 0;
}
