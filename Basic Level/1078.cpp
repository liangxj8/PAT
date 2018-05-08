#include <iostream>
using namespace std;
int main()
{
    int cnt = 1;
    char ch;
    string str;

    cin >> ch;
    getchar();
    getline(cin, str);
    str += '\n';
    if (ch == 'C') {
        // code
        for (int i = 1; i < str.length(); i++) {
            if (str[i] != str[i - 1]) {
                if (cnt != 1)
                    cout << cnt;
                cnt = 1;
                cout << str[i - 1];
            } else {
                cnt++;
            }
        }
    } else if (ch == 'D') {
        // decode
        for (int i = 0; i < str.length(); i++) {
            if ('0' <= str[i] && str[i] <= '9') {
                if ('0' <= str[i - 1] && str[i - 1] <= '9') {
                    cnt = cnt * 10 + str[i] - '0';
                } else {
                    cnt = str[i] - '0';
                }
            } else {
                while (cnt--) {
                    cout << str[i];
                }
                cnt = 1;
            }
        }
    }

    return 0;
}
