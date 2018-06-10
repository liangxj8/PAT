#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    vector<int> vec;

    cin >> n;
    vec.resize(n);
    for (i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.rbegin(), vec.rend());
    for (i = 0; i < n; i++) {
        if (vec[i] <= i + 1) {
            break;
        }
    }
    cout << i << endl;
    return 0;
}
