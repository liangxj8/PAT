#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int k, n, i;
    bool flag = false;
    bool num[10000];
    vector<int> v;

    memset(num, false, sizeof(num));
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &n);
        v.push_back(n);
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = (3 * n + 1) / 2;
            }
            num[n] = true;
        }
    }
    sort(v.rbegin(), v.rend());
    for (i = 0; i < v.size(); i++)
        if (!num[v[i]]) {
            if (!flag) {
                printf("%d", v[i]);
                flag = true;
            }
            else {
                printf(" %d", v[i]);
            }
        }
    printf("\n");

    return 0;
}