#include <cstdio>
int main()
{
    char ch;
    int idx;
    int max = 0;
    int count[128] = {0};
    char str[] = "PATest";

    // count all the character directly omitting the judgment
    while (scanf("%c", &ch) && ch != '\n') {
        count[ch]++;
    }

    for (idx = 0; idx < 6; idx++) {
        if (count[str[idx]] > max) {
            max = count[str[idx]];
        }
    }

    while (max--) {
        for (idx = 0; idx < 6; idx++) {
            if (count[str[idx]] != 0) {
                printf("%c", str[idx]);
                count[str[idx]]--;
            }
        }
    }

    return 0;
}
