#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string table;
    string a, b, result;
    int len, mode, q, r, idx;

    cin >> table >> a >> b;
    reverse(table.begin(), table.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    len = max(a.length(), b.length());
    len = max(int(table.length()), len);
    for (idx = table.length(); idx < len; idx++) {
        table += '0';
    }
    for (idx = a.length(); idx < len; idx++) {
        a += '0';
    }
    for (idx = b.length(); idx < len; idx++) {
        b += '0';
    }
    q = 0;
    for (idx = 0; idx < len; idx++) {
        if (table[idx] == '0') {
            mode = 10;
        } else {
            mode = table[idx] - '0';
        }
        q = a[idx] + b[idx] + q - 96;
        r = q % mode;
        q = q / mode;
        result += (r + '0');
    }
    if (q != 0) {
        result += (q + '0');
    }
    reverse(result.begin(), result.end());
    for (idx = 0; idx < result.length(); idx++) {
        if (result[idx] != '0') {
            break;
        }
    }
    if (idx == result.length()) {
        printf("0\n");
    } else {
        for (; idx < result.length(); idx++) {
            printf("%c", result[idx]);
        }
        printf("\n");
    }

    return 0;
}