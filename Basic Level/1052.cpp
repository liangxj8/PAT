#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<string> > vec;
    string charset;
    int len, i, j, k;
    int a, b, c, d, e;

    vec.resize(3, vector<string>(0));
    for (i = 0; i < 3; i++) {
        getline(cin, charset);
        len = charset.length();
        j = 0;
        while (j < len) {
            if (charset[j] == '[') {
                k = j;
                while (k++ < len) {
                    if (charset[k] == ']') {
                        vec[i].push_back(charset.substr(j + 1, k - j -1));
                        break;
                    }
                }
                j = k;
            }
            j++;
        }
    }
    cin >> k;
    for (i = 0; i < k; i++) {
        cin >> a >> b >> c >> d >> e;
        if (a < 1 || b < 1 || c < 1 || d < 1 || e < 1 ||
            a > vec[0].size() || b > vec[1].size() || c > vec[2].size() ||
            d > vec[1].size() || e > vec[0].size()) {
            cout << "Are you kidding me? @\\/@\n";
        } else {
            cout << vec[0][a - 1];
            cout << '(' << vec[1][b - 1];
            cout << vec[2][c - 1];
            cout << vec[1][d - 1] << ')';
            cout << vec[0][e - 1] << endl;
        }
    }

    return 0;
}
