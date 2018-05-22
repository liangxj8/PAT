#include <iostream>
using namespace std;
int main()
{
    string str1, str2, str3, str4;
    char DD;
    bool flag = false;
    int HH, MM, i;
    string DAY[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    cin >> str1 >> str2 >> str3 >> str4;
    for (i = 0; i < str1.length() && i < str2.length(); i++) {
        if (str1[i] == str2[i] && !flag) {
            if (str1[i] >= 'A' && str1[i] <= 'G'){
                DD = str1[i];
                flag = true;
            }
        } else if (str1[i] == str2[i] && flag) {
            if (str2[i] >= 'A' && str2[i] <= 'N') {
                HH = str2[i] - 'A' + 10;
                break;
            } else if (str2[i] >= '0' && str2[i] <= '9') {
                HH = str2[i] - '0';
                break;
            }
        }
    }
    for (i = 0; i < str3.length() && i < str4.length(); i++) {
        if (str3[i] == str4[i]) {
            if (str3[i] >= 'A' && str3[i] <= 'Z' || str3[i] >= 'a' && str3[i] <= 'z'){
                MM = i;
                break;
            }
        }
    }

    cout << DAY[DD - 'A'];
    printf(" %02d:%02d\n", HH, MM);

    return 0;
}
