#include <cstdio>
int main()
{
    int N;
    int team_id, member_id, score;
    // 1 <= team_id <= 1000
    int team_score[1005] = {0};
    int champion_id = 0;
    int champion_score = 0;

    scanf("%d", &N);
    while (N--) {
        scanf("%d-%d %d", &team_id, &member_id, &score);
        team_score[team_id] += score;
        if (team_score[team_id] > champion_score) {
            champion_id = team_id;
            champion_score = team_score[team_id];
        }
    }
    printf("%d %d\n", champion_id, champion_score);

    return 0;
}
