#include <iostream>
using namespace std;
int main()
{
    int A, B, D;
    int i, sum;
    string s;

    cin >> A >> B >> D;
    sum = A + B;
    if (sum == 0)
        cout << '0' << endl;
    else {
        while (sum != 0) {
            s += sum % D + '0';
            sum = sum / D;
        }
        for (i = s.length() - 1; i >=0; i--) {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
