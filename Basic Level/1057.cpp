#include <iostream>
int main()
{
    char ch;
    int N = 0;
    int zeros = 0;
    int ones = 0;

    ch = getchar();
    while (ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            N += ch - 'a' + 1;
        }
        if (ch >= 'A' && ch <= 'Z') {
            N += ch - 'A' + 1;
        }
        ch = getchar();
    }
    while (N) {
        if (N & 1) {
            ones++;
        } else {
            zeros++;
        }
        N = N >> 1;
    }
    printf("%d %d\n", zeros, ones);

    return 0;
}
