#include <cstdio>
#include <cstring>
int main()
{
    char ch;
    int count[128];
    char character;
    int freq = 0;

    memset(count, 0, sizeof(count));
    while (scanf("%c", &ch) && ch != '\n') {
        count[ch]++;
    }
    for (ch = 'a'; ch <= 'z'; ch++) {
        count[ch] += count[ch - 'a' + 'A'];
        if (count[ch] > freq) {
            character = ch;
            freq = count[ch];
        }
    }
    printf("%c %d\n", character, freq);

    return 0;
}
