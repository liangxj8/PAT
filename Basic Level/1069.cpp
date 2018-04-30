#include <iostream>
#include <map>
using namespace std;
int main()
{
    int m, n, s;
    bool flag = false;
    string name;
    map<string, int> winner;

    cin >> m >> n >> s;
    for (int i = 1; i <= m; i++) {
        cin >> name;
        if (winner[name] == 1)
            s++;
        if (i == s && winner[name] == 0) {
            winner[name] = 1;
            cout << name << endl;
            flag = true;
            s += n;
        }
    }
    if (!flag)
        cout << "Keep going..." << endl;

    return 0;
}
