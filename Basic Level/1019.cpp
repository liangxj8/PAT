#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int big, small;

    cin >> str;
    while (str.length() < 4) {
        // N < 1000
        str += '0';
    }
    if (str[0] == str[1] && str[1] == str[2] && str[2] == str[3]) {
        printf("%s - %s = 0000\n", str.c_str(), str.c_str());
    } else {
        do {
            sort(str.rbegin(), str.rend());
            big = stoi(str, nullptr, 10);
            sort(str.begin(), str.end());
            small = stoi(str, nullptr, 10);
            printf("%04d - %04d = %04d\n", big, small, big - small);
            str = to_string(big - small);
            while (str.length() < 4) {
                // N的各位数字全相等但不是4位数
                str += '0';
            }
            if (stoi(str, nullptr, 10) == 0) {
                break;
            }
        } while (str != "6174"); // N == 6174
    }

    return 0;
}
