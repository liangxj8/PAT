#include <cstdio>
#include <map>
struct player
{
    std::map<char, int> cjb;
    int win = 0;
    int draw = 0;
    int loss = 0;
};

int main()
{
    int n;
    char charA, charB, max;
    player playerA, playerB;

    scanf("%d", &n);
    getchar();
    while (n--) {
        scanf("%c %c", &charA, &charB);
        getchar();
        if (charA == charB)
            playerA.draw++;
        else if ((charA == 'C' && charB == 'J') ||
                 (charA == 'J' && charB == 'B') ||
                 (charA == 'B' && charB == 'C')) {
            playerA.win++;
            playerA.cjb[charA]++;
        } else if ((charB == 'C' && charA == 'J') ||
                   (charB == 'J' && charA == 'B') ||
                   (charB == 'B' && charA == 'C')) {
            playerA.loss++;
            playerB.cjb[charB]++;
        }
    }
    printf("%d %d %d\n", playerA.win, playerA.draw, playerA.loss);
    printf("%d %d %d\n", playerA.loss, playerA.draw, playerA.win);
    max = playerA.cjb['C'] >= playerA.cjb['J'] ? 'C' : 'J';
    max = playerA.cjb[max] > playerA.cjb['B'] ? max : 'B';
    printf("%c ", max);
    max = playerB.cjb['C'] >= playerB.cjb['J'] ? 'C' : 'J';
    max = playerB.cjb[max] > playerB.cjb['B'] ? max : 'B';
    printf("%c\n", max);

    return 0;
}
