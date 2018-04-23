#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    int len;
    double count = 0;
    vector<int> lens;

    cin >> N;
    while (N--) {
        cin >> len;
        lens.push_back(len);
    }
    sort(lens.begin(), lens.end(), less<int>());

    count = *lens.begin();
    for (vector<int>::iterator it = lens.begin() + 1; it != lens.end(); it++) {
        count = (count + *it) / 2.0;
    }
    cout << int(count) << endl;

    return 0;
}
