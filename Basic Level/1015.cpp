#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct student
{
    int id, virtue, talent;
};

bool cmp(student a, student b)
{
    if (a.virtue + a.talent != b.virtue + b.talent) {
        return a.virtue + a.talent > b.virtue + b.talent;
    } else if (a.virtue != b.virtue) {
        return a.virtue > b.virtue;
    } else {
        return a.id < b.id;
    }
}

int main()
{
    int num, low, high;
    int sum = 0;
    int i, j;
    vector<student> stu[4];
    student tmp;

    scanf("%d %d %d", &num, &low, &high);
    while (num--) {
        scanf("%d %d %d", &tmp.id, &tmp.virtue, &tmp.talent);
        if (tmp.virtue >= high && tmp.talent >= high) {
            stu[0].push_back(tmp);
        } else if (tmp.virtue >= high && tmp.talent >= low) {
            stu[1].push_back(tmp);
        } else if (tmp.virtue >= low && tmp.talent >= low) {
            if (tmp.virtue >= tmp.talent) {
                stu[2].push_back(tmp);
            } else {
                stu[3].push_back(tmp);
            }
        }
    }
    for (i = 0; i < 4; i++) {
        sum += stu[i].size();
        sort(stu[i].begin(), stu[i].end(), cmp);
    }
    printf("%d\n", sum);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < stu[i].size(); j++) {
            printf("%d %d %d\n", stu[i][j].id, stu[i][j].virtue, stu[i][j].talent);
        }
    }

    return 0;
}
