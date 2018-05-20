#include <cstdio>
#include <cstring>
const int NUMS = 100000;
int main()
{
    int n, i, j;
    int cnt = 0;
    bool num[NUMS];

    memset(num, true, sizeof(num));
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (num[i]) {
            for (j = 2; i * j < NUMS; j++) {
                num[i * j] = false;
            }
        }
    }
    for (i = 5; i <= n; i++) {
        if (num[i] && num[i - 2]) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}