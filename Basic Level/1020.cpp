#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct mooncake
{
    float inventory;
    float total;
    float unit;
};

bool cmp(mooncake a, mooncake b)
{
    return a.unit > b.unit;
}

int main()
{
    vector<mooncake> v;
    int n, d, i;
    float profit = 0;

    scanf("%d %d", &n, &d);
    for (i = 0; i < n; i++) {
        mooncake tmp;
        scanf("%f", &tmp.inventory);
        v.push_back(tmp);
    }
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i].total);
        v[i].unit = v[i].total / v[i].inventory;
    }
    sort(v.begin(), v.end(), cmp);

    for (i = 0; i < v.size(); i++) {
        if (d > v[i].inventory) {
            profit += v[i].total;
            d -= v[i].inventory;
        } else if (v[i].inventory >= d) {
            profit += d * v[i].unit;
            break;
        }
    }
    printf("%.2f\n", profit);

    return 0;
}
