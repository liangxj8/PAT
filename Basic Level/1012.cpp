#include <cstdio>
int main()
{
    int n, num;
    int A1 = 0;
    int A2 = 0;
    int A3 = 0;
    float A4 = 0;
    int cnt = 0;
    int A5 = 0;
    bool flag = true;
    bool flagA2 = false;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        A1 = num % 10 == 0 ? A1 + num : A1;
        if (num % 5 ==1) {
            A2 = flag ? A2 + num : A2 - num;
            flag = !flag;
            flagA2 = true;
        }
        A3 = num % 5 == 2 ? ++A3 : A3;
        if (num % 5 == 3) {
            A4 += num;
            cnt++;
        }
        if (num % 5 == 4) {
            A5 = num > A5 ? num : A5;
        }
    }
    A4 = A4 / cnt;

    if (A1 == 0) {
        printf("N ");
    } else {
        printf("%d ", A1);
    }
    if (!flagA2) {
        printf("N ");
    } else {
        printf("%d ", A2);
    }
    if (A3 == 0) {
        printf("N ");
    } else {
        printf("%d ", A3);
    }
    if (cnt == 0) {
        printf("N ");
    } else {
        printf("%0.1f ", A4);
    }
    if (A5 == 0) {
        printf("N\n");
    } else {
        printf("%d\n", A5);
    }

    return 0;
}
