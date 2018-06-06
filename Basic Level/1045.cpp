#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct num
{
    int value;
    bool is_main;
};

bool cmp(num a, num b)
{
    return a.value < b.value;
}

int main()
{
    int n, cnt = 0;
    int i, j;
    int left_max, right_min;
    bool flag = false;
    num tmp;
    vector<num> vec;

    scanf("%d", &n);
    left_max = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &tmp.value);
        if (left_max < tmp.value) {
            tmp.is_main = true;
            left_max = tmp.value;
        } else {
            tmp.is_main = false;
        }
        vec.push_back(tmp);
    }
    right_min = vec[n - 1].value;
    for (i = n - 1; i >= 0; i--) {
        if (vec[i].value > right_min) {
            vec[i].is_main = false;
        } else {
            right_min = vec[i].value;
        }
        if (vec[i].is_main) {
            cnt++;
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    printf("%d\n", cnt);
    for (i = 0; i < vec.size(); i++) {
        if (vec[i].is_main && flag) {
            printf(" %d", vec[i].value);
            flag = true;
        } else if (vec[i].is_main) {
            printf("%d", vec[i].value);
            flag = true;
        }
    }
    printf("\n");
    return 0;
}
