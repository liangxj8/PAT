#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int N;
    int num;
    int count[10000];
    memset(count, 0, sizeof(count));

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d", &num);
        count[int(abs(num - i))]++;
    }
    for (int i = 9999; i >= 0; i--) {
        if (count[i] > 1) {
            printf("%d %d\n", i, count[i]);
        }
    }

    return 0;
}
