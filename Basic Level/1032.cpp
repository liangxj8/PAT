#include <cstdio>
#include <map>
int main()
{
    int n, sid, score;
    int max_sid, max = 0;
    std::map<int, int> scores;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &sid, &score);
        scores[sid] += score;
        if (scores[sid] > max) {
            max_sid = sid;
            max = scores[sid];
        }
    }
    printf("%d %d\n", max_sid, max);

    return 0;
}
