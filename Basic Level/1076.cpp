#include <iostream>
using namespace std;
int main()
{
    int i;
    int N;
    string str;

    cin >> N;
    while(N--) {
        for (i = 0; i < 4; i++) {
            cin >> str;
            if (str[2] == 'T') {
                cout << str[0] - 'A' + 1;
            }
        }
    }
    cout << endl;
    return 0;
}
