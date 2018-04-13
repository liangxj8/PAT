#include <cstdio>
int main()
{
    int num;
    int quotient;
    int idx;

    scanf("%d", &num);

    quotient = num / 100;
    num %= 100;
    for (idx = 0; idx < quotient; idx++) {
        printf("%c", 'B');
    }
    quotient = num / 10;
    num %= 10;
    for (idx = 0; idx < quotient; idx++) {
        printf("%c", 'S');
    }
    for (idx = 1; idx <= num; idx++) {
        printf("%d", idx);
    }
    printf("\n");

    return 0;
}
