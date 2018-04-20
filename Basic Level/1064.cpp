#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int N, num, count;
    int friend_id[40];
    int i, first;

    memset(friend_id, 0, sizeof(friend_id));
    cin >> N;
    while (N--) {
        cin >> num;
        count = 0;
        while (num) {
            count += num % 10;
            num /= 10;
        }
        friend_id[count] = 1;
    }

    count = 0;
    for (i = 0; i <= 36; i++) {
        if (friend_id[i] == 1) {
            first = i;
            count++;
            break;
        }
    }
    for (i = first + 1; i <= 36; i++) {
        if (friend_id[i] == 1) {
            count++;
        }
    }

    cout << count << endl;
    cout << first;
    while (++first && first <= 36) {
        if (friend_id[first] == 1) {
            cout << " " << first;
        }
    }
    cout << endl;

    return 0;
}
