#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

struct school
{
    string name;
    int counts;
    int a, b, t;
    int scores;
};

bool cmp(school a, school b)
{
    if (a.scores != b.scores) {
        return a.scores > b.scores;
    } else if (a.counts != b.counts) {
        return a.counts < b.counts;
    } else {
        return a.name < b.name;
    }
}

int main()
{
    int n, rank = 1;
    int score, pre_score = -1;
    string stu_id, school_name;
    school tmp;
    vector<school> vec;
    map<string, int> sid;

    cin >> n;
    while (n--) {
        cin >> stu_id >> score;
        cin >> school_name;
        transform(school_name.begin(), school_name.end(), school_name.begin(), ::tolower);
        if (sid.count(school_name) == 0) {
            sid[school_name] = vec.size();
            tmp.name = school_name;
            tmp.counts = 1;
            if (stu_id[0] == 'A') {
                tmp.a = score;
                tmp.b = 0;
                tmp.t = 0;
            } else if (stu_id[0] == 'B') {
                tmp.a = 0;
                tmp.b = score;
                tmp.t = 0;
            } else if (stu_id[0] == 'T') {
                tmp.a = 0;
                tmp.b = 0;
                tmp.t = score;
            }
            vec.push_back(tmp);
        } else {
            if (stu_id[0] == 'A') {
                vec[sid[school_name]].a += score;
            } else if (stu_id[0] == 'B') {
                vec[sid[school_name]].b += score;
            } else if (stu_id[0] == 'T') {
                vec[sid[school_name]].t += score;
            }            
            vec[sid[school_name]].counts++;
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        vec[i].scores = floor(vec[i].b / 1.5 + vec[i].a + vec[i].t * 1.5);
    }
    sort(vec.begin(), vec.end(), cmp);

    printf("%d\n", vec.size());
    for (int i = 0; i < vec.size(); i++) {
        tmp = vec[i];
        if (tmp.scores != pre_score) {
            pre_score = tmp.scores;
            rank = i + 1;
        }
        printf("%d %s %d %d\n", rank, tmp.name.c_str(), tmp.scores, tmp.counts);
    }

    return 0;
}
