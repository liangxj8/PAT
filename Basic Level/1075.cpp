#include <cstdio>
#include <map>

bool type(int, int, int);

int main()
{
    struct node
    {
        int data;
        int next;
    };
    int head, n, k;
    int cur;
    bool flag = false;
    node tmp;
    std::map<int, node> l;

    scanf("%d %d %d", &head, &n, &k);
    while (n--) {
        scanf("%d %d %d", &cur, &tmp.data, &tmp.next);
        l[cur] = tmp;
    }

    for (int i = -1; i < 2; i++) {
        cur = head;
        while (cur != -1) {
            if (type(l[cur].data, k, i)) {
                if (!flag) {
                    printf("%05d %d ", cur, l[cur].data);
                    flag = true;
                } else {
                    printf("%05d\n%05d %d ", cur, cur, l[cur].data);
                }
            }
            cur = l[cur].next;
        }
    }

    printf("-1\n");
    return 0;
}

bool type(int data, int k, int type)
{
    if (type == -1) {
        return data < 0;
    } else if (type == 0) {
        return data >= 0 && data <= k;
    } else if (type == 1) {
        return data > k;
    }
}