#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
    string name;
    int height;
};
bool cmp (student a, student b);

int main()
{
    int n, row, m, remainder;
    int i, j, k, idx;
    student tmp;
    vector<student> vec;
    vector<student> order;

    cin >> n >> row;
    m = n / row;
    remainder = n - row * m;
    for (i = 0; i < n; i++) {
        cin >> tmp.name >> tmp.height;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end(), cmp);

    idx = 0;
    for (i = 0; i < row; i++) {
        order.clear();
        order.resize(m + remainder);
        order[(m + remainder) / 2] = vec[idx];
        idx++;
        j = (m + remainder) / 2 - 1;
        k = (m + remainder) / 2 + 1;
        while (true) {
            if (j >= 0) {
                order[j] = vec[idx];
                idx++;
                j--;
            }
            if (k < m + remainder) {
                order[k] = vec[idx];
                idx++;
                k++;
            }
            if (j == -1 && k == m + remainder) {
                break;
            }
        }
        cout << order[0].name;
        for (j = 1; j < order.size(); j++) {
            cout << ' ' << order[j].name;
        }
        cout << endl;
        remainder = 0;
    }

    return 0;
}

bool cmp (student a, student b)
{
    if (a.height != b.height) {
        return a.height > b.height;
    } else {
        return a.name < b.name;
    }
}
