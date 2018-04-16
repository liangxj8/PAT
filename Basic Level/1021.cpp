#include <cstdio>
#include <cstring>
int main()
{
    char num;
    int count[10];

    memset(count, 0, sizeof(count));
    while(scanf("%c", &num) && num != '\n') {
        count[num - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d:%d\n", i, count[i]);
        }
    }

    return 0;
}
