#include <cstdio>
int main()
{
    int total, k;
    int n1, b, t, n2;

    scanf("%d %d", &total, &k);
    while (k--) {
        scanf("%d %d %d %d", &n1, &b, &t, &n2);
        if (t > total) {
            printf("Not enough tokens.  Total = %d.\n", total);
        } else if ((n1 > n2) ^ b) {
            total += t;
            printf("Win %d!  Total = %d.\n", t, total);
        } else {
            total -= t;
            if (total > 0) {
                printf("Lose %d.  Total = %d.\n", t, total);
            } else {
                printf("Lose %d.  Total = %d.\n", t, 0);
                printf("Game Over.\n");
                break;
            }
        }
    }

    return 0;
}
