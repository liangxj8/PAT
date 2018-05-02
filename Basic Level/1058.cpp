#include <cstdio>
#include <string>
using namespace std;

struct Question {
    int fullscore;  // 满分值
    int opt_cnt;    // 选项个数
    int correct;    // 正确选项个数
    int wrong;      // 该题错误次数
    string option;  // 正确选项
};

int main()
{
    int i, j, k;
    int n, m;
    int cnt;        // 学生选中的选项个数
    int score;      // 学生的得分
    char ch;
    string opt;     // 学生的选项
    int max = 0;    // 出错最多的题目的错误次数
    bool flag = false;
    Question qst[100];

    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &qst[i].fullscore, &qst[i].opt_cnt, &qst[i].correct);
        qst[i].wrong = 0;
        qst[i].option = "";
        for (j = 0; j < qst[i].correct; j++) {
            scanf(" %c", &ch);
            qst[i].option += ch;
        }
    }
    getchar();
    for (i = 0; i < n; i++) {
        score = 0;
        for (j = 0; j < m; j++) {
            scanf("(%d", &cnt);
            opt = "";
            for (k = 0; k < cnt; k++) {
                scanf(" %c", &ch);
                opt += ch;
            }
            getchar();
            getchar();
            if (opt != qst[j].option) {
                flag = true;
                qst[j].wrong += 1;
                if (qst[j].wrong > max) {
                    max = qst[j].wrong;
                }
            } else {
                score += qst[j].fullscore;
            }
        }
        printf("%d\n", score);
    }
    if (flag) {
        printf("%d", max);
        for (i = 0; i < m; i++) {
            if (qst[i].wrong == max)
                printf(" %d", i + 1);
        }
        printf("\n");
    } else {
        printf("Too simple\n");
    }

    return 0;
}
