#include <iostream>
using namespace std;
int main()
{
    const int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    const char M[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int i, N;
    int sum;
    string id;
    bool passed = true;

    cin >> N;
    while (N--) {
        cin >> id;
        sum = 0;
        for (i = 0; i < 17; i++) {
            sum += (id[i] - '0') * weight[i];
        }
        sum %= 11;
        if (id[17] != M[sum]) {
            cout << id << endl;
            passed = false;
        }
    }
    if (passed)
        cout << "All passed" << endl;

    return 0;
}
