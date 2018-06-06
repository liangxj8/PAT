#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int len_a, len_b, tmp;
    string a, b;
    string result = "";
    string cipher = "0123456789JQK";

    cin >> a >> b;
    len_a = a.length();
    len_b = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (len_a > len_b) {
        b.append(len_a - len_b, '0');
    } else {
        a.append(len_b - len_a, '0');
    }

    for (int i = 0; i < a.length(); i++) {
        if (i % 2 == 0) {
            tmp = a[i] - '0' + b[i] - '0';
            result += cipher[tmp % 13];
        } else {
            tmp = b[i] - a[i];
            if (tmp < 0) {
                tmp += 10;
            }
            result += cipher[tmp];
        }
    }
    for (int i = result.length() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
