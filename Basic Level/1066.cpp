#include <cstdio>
int main()
{
    int M, N, A, B, replace;
    int i, j, pixel;

    scanf("%d %d %d %d %d", &M, &N, &A, &B, &replace);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &pixel);
            if (A <= pixel && pixel <= B) {
                printf("%03d", replace);
            } else {
                printf("%03d", pixel);
            }
            if (j == N - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }

    return 0;
}
