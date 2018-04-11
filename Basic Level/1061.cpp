#include <cstdio>
int main()
{
    int idx;
    int N, M;
    int score[100];
    bool ans[100];
    bool stu[100];
    int final_score;

    scanf("%d %d", &N, &M);
    for (idx = 0; idx < M; idx++) {
       scanf("%d", &score[idx]);
    }
    for (idx = 0; idx < M; idx++) {
       scanf("%d", &ans[idx]);
    }
    while (N--) {
        final_score = 0;
        for (idx = 0; idx < M; idx++) {
            scanf("%d", &stu[idx]);
        }
        for (idx = 0; idx < M; idx++) {
            if (!ans[idx]^stu[idx]) {
                final_score += score[idx];
            }
        }
        printf("%d\n", final_score);
    }

    return 0;
}
