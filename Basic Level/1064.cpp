#include <iostream>
#include <set>
using namespace std;
int main()
{
    int N, num, count;
    set<int> friend_id;

    cin >> N;
    while (N--) {
        cin >> num;
        count = 0;
        while (num) {
            count += num % 10;
            num /= 10;
        }
        friend_id.insert(count);
    }

    cout << friend_id.size() << endl;
    cout << *friend_id.begin();
    friend_id.erase(*friend_id.begin());
    for (auto it = friend_id.begin(); it != friend_id.end(); it++) {
        cout << " " << *it;
    }
    cout << endl;

    return 0;
}
