#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j;
    int N, cnt;
    int cur, max;
    char ch;

    cin >> N >> ch;
    cnt = floor(sqrt((N + 1) / 2));
    max = 2 * cnt - 1;
    for (i = cnt; i > 0; i--) {
        cur = 2 * i - 1;
        for (j = 0; j < (max - cur) / 2; j++)
            cout << " ";
        for (j = 0; j < cur; j++)
            cout << ch;
        cout << endl;
    }
    for (i = 2; i <= cnt; i ++) {
        cur = 2 * i - 1;
        for (j = 0; j < (max - cur) / 2; j++)
            cout << " ";
        for (j = 0; j < cur; j++)
            cout << ch;
        cout << endl;
    }
    cout << N - (2 * cnt * cnt - 1) << endl;

    return 0;
}
