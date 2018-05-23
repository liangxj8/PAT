#include <iostream>
using namespace std;
int main()
{
    string a, q;
    int b, r = 0;
    int i, j = 0;

    cin >> a >> b;
    if (a[0] - '0' >= b) {
        q = (a[0] - '0') / b + '0';
        r = (a[0] - '0') % b;
    } else {
        q = "";
        r = a[0] - '0';
    }
    for (i = 1; i < a.length(); i++) {
        r = r * 10 + a[i] - '0';
        q += (r / b + '0');
        r = r % b;
        j++;
    }
    if (q == "") q = "0";
    cout << q << " " << r << endl;

    return 0;
}
