#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum = 0;
    string str;
    string num[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        sum += str[i] - '0';
    }
    str = to_string(sum);
    cout << num[str[0] - '0'];
    for (int i = 1; i < str.length(); i++) {
        cout << " " << num[str[i] - '0'];
    }
    printf("\n");

    return 0;
}
