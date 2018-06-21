#include <iostream>
#include <algorithm>
using namespace std;

bool palindromic(string num)
{
    for (int i = 0; i < num.length() / 2; i++) {
        if (num[i] != num[num.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

string add(string num) {
    int carry = 0;
    string reversed, result;

    reversed = num;
    reverse(reversed.begin(), reversed.end());
    for (int i = 0; i < num.length(); i++) {
        carry += num[i] + reversed[i];
        result += carry % 10 + '0';
        carry /= 10;
    }
    if (0 <= carry && carry <= 9) {
        result += carry + '0';
    }

    printf("%s + ", num.c_str());
    printf("%s = ", reversed.c_str());
    printf("%s\n", result.c_str());

    return result;
}

int main()
{
    int cnt = 10;
    string num;

    cin >> num;
    while (!palindromic(num) && cnt--) {
        num = add(num);
    }
    if (palindromic(num)) {
        printf("%d is a palindromic number.", num);
    } else {
        printf("Not found in 10 iterations.\n");
    }

    return 0;
}
