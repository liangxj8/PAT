#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    bool flag = false;
    string tmp1, tmp2;
    map<string, string> couple;
    map<string, bool> participant;
    vector<string> single_dog;

    cin >> n;
    while (n--) {
        cin >> tmp1 >> tmp2;
        couple[tmp1] = tmp2;
        couple[tmp2] = tmp1;
    }
    cin >> m;
    while (m--) {
        cin >> tmp1;
        participant[tmp1] = true;
    }
    for (auto it = participant.begin(); it != participant.end(); it++) {
        if (!participant[couple[it->first]]) {
            single_dog.push_back(it->first);
        }
    }
    sort(single_dog.begin(), single_dog.end());
    cout << single_dog.size() << endl;
    for (int i = 0; i < single_dog.size(); i++) {
        if (flag) {
            cout << " ";
        }
        cout << single_dog[i];
        flag = true;
    }
    if (flag) {
      cout << endl;
    }

    return 0;
}
