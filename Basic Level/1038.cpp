#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n, score;
    map<int, int> count;

    cin >> n;
    while (n--) {
        cin >> score;
        count[score]++;
    }
    cin >> n;
    while (n--) {
        cin >> score;
        cout << count[score];
        if (n)
            cout << " ";
        else
            cout << endl;
    }

    return 0;
}
