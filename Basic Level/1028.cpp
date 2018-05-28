#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct resident
{
    string name;
    int birthday;
};

bool cmp(resident a, resident b)
{
    return a.birthday < b.birthday;
}

int main()
{
    vector<resident> vec;
    resident tmp;
    int year, month, day;
    int n, v_size;

    scanf("%d", &n);
    while (n--) {
        cin >> tmp.name;
        scanf("%d/%d/%d", &year, &month, &day);
        tmp.birthday = year * 10000 + month * 100 + day;
        if (tmp.birthday >= 18140906 && tmp.birthday <= 20140906) {
            vec.push_back(tmp);
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    v_size = vec.size();
    printf("%d", v_size);
    if (v_size != 0) {
        cout << " " << vec.begin()->name << " ";
        cout << vec[v_size - 1].name << endl;
    }

    return 0;
}
