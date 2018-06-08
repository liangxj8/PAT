#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, valid;
    int i, j;
    bool flag;
    double num, sum;
    string str;

    cin >> n;
    valid = 0;
    for (i = 0; i < n; i++) {
        cin >> str;
        flag = true;
        for (j = 0; j < str.length(); j++) {
            if (!iswdigit(str[j]) && !(j == 0 && str[j] == '-' ||
                str[j] == '.' && (str.length() - j >= 1 && str.length() - j <= 3))) {
                flag = false;
                break;
            }
        }
        if (flag) {
            num =  stof(str, nullptr);
            if (num >= -1000 && num <= 1000) {
                sum += num;
                valid++;
            } else {
                printf("ERROR: %s is not a legal number\n", str.c_str());
            }
        } else {
            printf("ERROR: %s is not a legal number\n", str.c_str());
        }
    }
    if (valid == 0) {
        printf("The average of 0 numbers is Undefined\n");
    } else if (valid == 1) {
        printf("The average of 1 number is %.2f\n", sum);
    } else {
        printf("The average of %d numbers is %.2f\n", valid, sum / valid);
    }

    return 0;
}
