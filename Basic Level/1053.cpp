#include <cstdio>
int main()
{
    int n, d, k;
    int i, j;
    int cnt;
    float maybe = 0;
    float vacant = 0;
    float e, ek;

    scanf("%d %f %d", &n, &e, &d);
    for (i = 0; i < n; i++) {
        scanf("%d", &k);
        cnt = 0;
        for (j = 0; j < k; j++) {
            scanf("%f", &ek);
            if (ek < e)
                cnt++;
        }
        if (cnt > (k / 2)) {
            if (k > d)
                vacant++;
            else
                maybe++;
        }
    }
    maybe = maybe / n * 100;
    vacant = vacant / n * 100;
    printf("%2.1f%% %2.1f%%\n", maybe, vacant);

    return 0;
}
