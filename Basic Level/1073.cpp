#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int i, j, k;
    int N, M;
    int opt_num, true_opt_num, slt_num;
    int bin2dec[] = {1, 2, 4, 8, 16};
    int match;
    int max_err_count = 0;
    float final_score;
    char ch;

    scanf("%d %d", &N, &M); // N个学生，M道多选题
    int full_score[M];
    int true_opt[M];
    int option[N][M]; // 每个学生的答题情况
    int freq[M][5]; // 每道题错的次数
    memset(true_opt, 0, sizeof(true_opt));
    memset(option, 0, sizeof(option));
    memset(freq, 0, sizeof(freq));

    for (i = 0; i < M; i++) {
        // input 满分值，选项个数，正确选项个数，所有正确选项
        // int, int, int, char[]
        scanf("%d %d %d", &full_score[i], &opt_num, &true_opt_num);
        for (j = 0; j < true_opt_num; j++) {
            scanf(" %c", &ch);
            true_opt[i] += bin2dec[ch - 'a'];
        }
    }
    for (i = 0; i < N; i++) {
        final_score = 0;
        for (j = 0; j < M; j++) {
            getchar();
            getchar();
            scanf("%d", &slt_num);
            for (k = 0; k < slt_num; k++) {
                scanf(" %c", &ch);
                option[i][j] += bin2dec[ch - 'a'];
            }
            getchar();

            match = option[i][j] ^ true_opt[j];
            if (match) {
                if ((option[i][j] | true_opt[j]) == true_opt[j]) {
                    final_score += full_score[j] / 2.0;
                }
                if (match & bin2dec[0]) freq[j][0]++; // a
                if (match & bin2dec[1]) freq[j][1]++; // b
                if (match & bin2dec[2]) freq[j][2]++; // c
                if (match & bin2dec[3]) freq[j][3]++; // d
                if (match & bin2dec[4]) freq[j][4]++; // e
            } else {
                final_score += full_score[j];
            }
        }
        printf("%.1f\n", final_score);
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < 5; j++) {
            max_err_count = max_err_count > freq[i][j] ? max_err_count : freq[i][j];
        }
    }

    if (max_err_count == 0) {
        printf("Too simple\n");
    } else {
        for (i = 0; i < M; i++) {
            for (j = 0; j < 5; j++) {
                if (max_err_count == freq[i][j]) {
                    printf("%d %d-%c\n", max_err_count, i+1, 'a' + j);
                }
            }
        }
    }
    return 0;
}
