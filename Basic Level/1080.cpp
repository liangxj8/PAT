#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct student
{
    string name;
    int gp, gm, gf, g;
};

bool cmp(student a, student b)
{
    if (a.g != b.g) {
        return a.g > b.g;
    } else {
        return a.name < b.name;
    }
}

int main()
{
    int p, m, n;
    int score, uid;
    string str;
    map<string, int> uid_list;
    vector<student> stu;

    scanf("%d %d %d", &p, &m, &n);
    while (p--) {
        cin >> str;
        scanf("%d", &score);
        if (score < 200) {
            continue;
        }
        uid_list[str] = stu.size();
        stu.push_back(student{str, score, -1, -1, -1});
    }
    while (m--) {
        cin >> str;
        scanf("%d", &score);
        if (uid_list.count(str) == 0) {
            continue;
        } else {
            stu[uid_list[str]].gm = score;
        }
    }
    while (n--) {
        cin >> str;
        scanf("%d", &score);
        if (uid_list.count(str) == 0) {
            continue;
        } else {
            uid = uid_list[str];
            stu[uid].gf = score;
            if (stu[uid].gm > stu[uid].gf) {
                stu[uid].g = stu[uid].gm * 0.4 + stu[uid].gf * 0.6 + 0.5;
            } else {
                stu[uid].g = stu[uid].gf;
            }
        }
    }
    sort(stu.begin(), stu.end(), cmp);
    for (int i = 0; i < stu.size(); i++) {
        if (stu[i].g >= 60) {
            printf("%s %d %d %d %d\n", stu[i].name.c_str(),
                   stu[i].gp, stu[i].gm, stu[i].gf, stu[i].g);
        }
    }

    return 0;
}
