#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    struct node
    {
        int data;
        int addr;
        int next;
    };
    map<int, node> m;
    vector<node> vec;
    int tmp_addr, head, cur;
    int N, k, i, j;
    node tmp;
    bool flag = false;

    scanf("%d %d %d", &head, &N, &k);
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &tmp.addr, &tmp.data, &tmp.next);
        m[tmp.addr] = tmp;
    }
    cur = head;
    while (cur != -1) {
        vec.push_back(m[cur]);
        cur = m[cur].next;
    }
    for (i = k - 1; i < vec.size(); i += k) {
        j = i;
        while (i - j != k) {
            if (flag) {
                printf("%05d\n", vec.at(j).addr);
            }
            printf("%05d ", vec.at(j).addr);
            printf("%d ", vec.at(j).data);
            flag = true;
            j--;
        }
    }
    for (j = i - k + 1; j < vec.size(); j++) {
        if (flag) {
            printf("%05d\n", vec.at(j).addr);
        }
        printf("%05d ", vec.at(j).addr);
        printf("%d ", vec.at(j).data);
        flag = true;
    }

    cout << "-1\n";

    return 0;
}
