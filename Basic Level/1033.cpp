#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string bad, raw;
    bool broken[128];

    memset(broken, false, sizeof(broken));
    getline(cin, bad);
    getline(cin, raw);
    for (int i = 0; i < bad.length(); i++) {
        broken[bad[i]] = true;
    }
    for (int i = 0; i < raw.length(); i++) {
        if (broken[raw[i]]) continue;
        if (iswalpha(raw[i]) && broken[toupper(raw[i])]) continue;
        if (broken['+'] && iswupper(raw[i])) continue;
        printf("%c", raw[i]);
    }
    printf("\n");

    return 0;
}
