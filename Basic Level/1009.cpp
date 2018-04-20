#include <iostream>
using namespace std;
int main()
{
    string word;
    string sentence[80];
    int len = 0;

    while (cin >> word) {
        sentence[len] = word;
        len++;
    }

    while (len--) {
        cout << sentence[len];
        if (len != 0) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
