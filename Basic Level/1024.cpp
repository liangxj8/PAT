#include <iostream>
using namespace std;
int main ()
{
    string science;
    string exponent = "";
    int e, exp, i;

    cin >> science;
    for (i = 0; i < science.length(); i++) {
        if (science[i] == 'E') {
            e = i;
            break;
        }
    }
    for (i = e + 2; i < science.length(); i++) {
        exponent += science[i];
    }

    if (science[0] == '-') {
        cout << "-";
    }
    if (science[e + 1] == '+') {
        exp = stoi(exponent, nullptr, 10) - e + 3;
        for (i = 1; i < e; i++) {
            if (i - e == exp) {
                cout << '.';
            }
            if (i != 2) {
                cout << science[i];
            }
        }
        while (exp--  && exp >= 0) {
            cout << '0';
        }
    } else {
        exp = stoi(exponent, nullptr, 10) -1;
        if (exp != -1) {
            cout << "0.";
            for (i = 0; i < exp; i++) {
                cout << '0';
            }
        }
        for (i = 1; i < e; i++) {
            if (i - e == exp) {
                cout << '.';
            }
            if (i != 2) {
                cout << science[i];
            }
        }
    }
    cout << endl;

    return 0;
}