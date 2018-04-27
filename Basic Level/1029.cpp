#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string input;
    string output;
    int i, j = 0;
    char bad[128];
    char ch;

    cin >> input >> output;
    memset(bad, 0, sizeof(bad));
    for (i = 0; i < input.length(); i++) {
        if (output[j] != input[i]) {
            ch = char(toupper(input[i]));
            if (!bad[ch])
                cout << ch;
            bad[ch] = 1;
        } else {
            j++;
        }
    }

    return 0;
}
