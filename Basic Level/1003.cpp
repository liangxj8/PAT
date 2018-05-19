#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, i;
    int p, t;
    map <char, int> m;
    string str;

    cin >> n;
    while (n--) {
        cin >> str;
        m.clear();
        for (i = 0; i < str.length(); i++) {
            m[str[i]]++;
            if (str[i] == 'P')
                p = i;
            if (str[i] == 'T')
                t = i;
        }
        if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 &&
            m.size() == 3 && (p*(t - p -1)) == (str.length() - t - 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
