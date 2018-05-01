#include <iostream>
#include <set>
using namespace std;
int main()
{
    int i, j;
    int n, m, k;
    set<string> drop;
    string name;
    string item;
    int stu_cnt = 0;
    int droped_cnt = 0;
    bool flag;

    cin >> n >> m;
    for (i = 0; i < m; i++) {
        cin >> item;
        drop.insert(item);
    }
    while (n--) {
        flag = false;
        cin >> name >> k;
        while (k--) {
            cin >> item;
            if (drop.count(item) == 1) {
                if (!flag) {
                    cout << name << ":";
                    stu_cnt++;
                    flag = true;
                }
                cout << " " << item;
                droped_cnt++;
            }
        }
        if (flag) {
            cout << endl;
        }
    }
    cout << stu_cnt << " " << droped_cnt << endl;

    return 0;
}