#include <iostream>
using namespace std;
int main()
{
    int n;
    string passwd;
    string try_pwd;

    cin >> passwd >> n;
    getchar();
    while (getline(cin, try_pwd)) {
        if (try_pwd == "#") {
            break;
        }
        if (try_pwd == passwd) {
            cout << "Welcome in" << endl;
            break;
        } else {
            cout << "Wrong password: ";
            cout << try_pwd << endl;
            n--;
        }
        if (n == 0) {
            cout << "Account locked" << endl;
            break;
        }
    }

    return 0;
}
