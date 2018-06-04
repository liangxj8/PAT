#include <iostream>
#include <cstring>
using namespace std;

string gewei[13] = {"", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string shiwei[13] = {"", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void int_to_str(string);
void str_to_int(string);

int main()
{
    int n;
    string str;

    cin >> n;
    getchar();
    while (n--) {
        getline(cin, str);
        if (iswdigit(str[0])) {
            int_to_str(str);
        } else {
            str_to_int(str);
        }
    }

    return 0;
}

void int_to_str(string str)
{
    int num;
    int a, b;

    num = stoi(str, nullptr, 0);
    if (num == 0) {
        cout << "tret" << endl;
        return;
    }
    a = num / 13;
    b = num % 13;
    if (a != 0) {
        cout << shiwei[a];
        if (b != 0) {
            cout << " " << gewei[b] << endl;;
        } else {
            cout << endl;
        }
    } else {
        cout << gewei[b] << endl;;
    }
}

void str_to_int(string str)
{
    int len;
    int a, b;

    len = str.length();
    if (len == 4 && strcmp(str.c_str(), "tret") == 0) {
        cout << "0\n";
        return;
    }
    if (len == 3) {
        for (a = 1; a < 13; a++) {
            if (strcmp(str.c_str(), shiwei[a].c_str()) == 0) {
                cout << a * 13 << endl;
                return;
            }
        }
        for (b = 1; b < 13; b++) {
            if (strcmp(str.c_str(), gewei[b].c_str()) == 0) {
                cout << b << endl;
                return;
            }
        }
    } else if (len == 7) {
        for (a = 1; a < 13; a++) {
            if (str[0] == shiwei[a][0] && str[1] == shiwei[a][1] && str[2] == shiwei[a][2]) {
                break;
            }
        }
        for (b = 1; b < 13; b++) {
            if (str[4] == gewei[b][0] && str[5] == gewei[b][1] && str[6] == gewei[b][2]) {
                break;
            }
        }
        cout << a * 13 + b << endl;
    }
}
