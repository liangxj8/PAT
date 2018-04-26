#include <iostream>
using namespace std;
int main()
{
    string s;
    int N;
    int i, j;

    cin >> s >> N;
    while (--N) {
        string tmp;
        for (i = 0; i < s.length(); i = j) {
            for (j = i; j < s.length() && s[i] == s[j]; j++);
            tmp += s[i] + to_string(j - i);
        }
        s = tmp;
    }

    cout << s << endl;

    return 0;
}
