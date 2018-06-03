#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, i, j;
    int raw_seq[100];
    int mid_seq[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &raw_seq[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &mid_seq[i]);
    }

    for (i = 1; i < n; i++) {
        if (mid_seq[i] < mid_seq[i - 1]) {
            break;
        }
    }
    // i 指向无序区第一个元素
    for (j = i; j < n; j++) {
        if (mid_seq[j] != raw_seq[j]) {
            break;
        }
    }
    if (j == n) {
        printf("Insertion Sort\n");
        for (j = i; j > 0; j--) {
            if (mid_seq[j] < mid_seq[j - 1]) {
                swap(mid_seq[j], mid_seq[j - 1]);
            }
        }
        printf("%d", mid_seq[0]);
        for (i = 1; i < n; i++) {
            printf(" %d", mid_seq[i]);
        }
        printf("\n");
    } else {
        printf("Merge Sort\n");
        j = 2;
        bool flag;
        do {
            flag = true;
            for (i = 0; i < n; i++) {
                if (raw_seq[i] != mid_seq[i]) {
                    flag = false;
                }
            }
            for (i = 0; i + j < n; i = i + j) {
                sort(raw_seq + i, raw_seq + i + j);
            }
            sort(raw_seq + i, raw_seq + n);
            j *= 2;
        } while (!flag);
        printf("%d", raw_seq[0]);
        for (i = 1; i < n; i++) {
            printf(" %d", raw_seq[i]);
        }
        printf("\n");
    }

    return 0;
}
