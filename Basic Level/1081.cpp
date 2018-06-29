#include <iostream>
using namespace std;
int main()
{
    int n;
    bool alpha, digit, illegal;
    string password;

    scanf("%d", &n);
    getchar();
    while (n--) {
        getline(cin, password);
        if (password.length() < 6) {
            printf("Your password is tai duan le.\n");
            continue;
        }
        alpha = false;
        digit = false;
        illegal = false;
        for (int i = 0; i < password.length(); i++) {
            if (iswalpha(password[i])) {
                alpha = true;
            } else if (iswdigit(password[i])) {
                digit = true;
            } else if (password[i] != '.') {
                illegal = true;
            }
        }
        if (illegal) {
            printf("Your password is tai luan le.\n");
        } else if (alpha && !digit) {
            printf("Your password needs shu zi.\n");
        } else if (digit && !alpha) {
            printf("Your password needs zi mu.\n");
        } else {
            printf("Your password is wan mei.\n");
        }
    }
    return 0;
}
