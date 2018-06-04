#include <iostream>
using namespace std;
int main()
{
    string str;
    int len, i;
    int count_p = 0;
    int count_t = 0;
    int result = 0;

    cin >> str;
    len = str.length();
    for (i = 0; i < len; i++) {
        if (str[i] == 'T') {
            count_t++;
        }
    }
    for (i = 0; i < len; i++) {
        if (str[i] == 'P') {
            count_p++;
        } else if (str[i] == 'T') {
            count_t--;
        } else if (str[i] == 'A') {
            result = (result + (count_p * count_t) % 1000000007) % 1000000007;
        }
    }
    cout << result << endl;

    return 0;
}