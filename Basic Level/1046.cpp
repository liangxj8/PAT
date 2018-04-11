#include <cstdio>
int main()
{
    int N, sum;
    int argA, argB;
    int guessA, guessB;
    int cupsA, cupsB;

    cupsA = 0;
    cupsB = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %d %d %d", &argA, &guessA, &argB, &guessB);
        sum = argA + argB;
        if (guessA == sum && guessB != sum) {
            cupsB++;
        } else if (guessA != sum && guessB == sum) {
            cupsA++;
        }
    }
    printf("%d %d\n", cupsA, cupsB);

    return 0;
}
