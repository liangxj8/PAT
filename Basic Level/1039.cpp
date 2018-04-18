#include <cstdio>
#include <cstring>
void count(int *count1, int *count2, int &extra, int &miss, int ch)
{
    int diff;
    if (count2[ch] != 0) {
        diff = count1[ch] - count2[ch];
        if (diff > 0) {
            extra += diff;
        } else {
            miss += diff;
        }
    } else {
        extra += count1[ch];
    }
}

int main()
{
    int count1[128];
    int count2[128];
    int extra = 0;
    int miss = 0;
    char ch;

    memset(count1, 0, sizeof(count1));
    memset(count2, 0, sizeof(count2));
    while (scanf("%c", &ch) && ch != '\n') {
        count1[ch]++;
    }
    while (scanf("%c", &ch) && ch != '\n') {
        count2[ch]++;
    }

    for (ch = '0'; ch <= '9'; ch++) {
        count(count1, count2, extra, miss, ch);
    }
    for (ch = 'a'; ch <= 'z'; ch++) {
        count(count1, count2, extra, miss, ch);
    }
    for (ch = 'A'; ch <= 'Z'; ch++) {
        count(count1, count2, extra, miss, ch);
    }

    if (miss != 0) {
        printf("No %d\n", -miss);
    } else {
        printf("Yes %d\n", extra);
    }

    return 0;
}
