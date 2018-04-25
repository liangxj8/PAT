#include <cstdio>
int main()
{
    int N;
    int count = 0;

    scanf("%d", &N);
    while (N != 1) {
        if (N % 2 == 0) {
            N = N / 2;
        } else {
            N = (3 * N + 1) / 2;
        }
        count++;
    }
    printf("%d\n", count);
}