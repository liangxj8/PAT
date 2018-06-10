#include <iostream>

int gcd(int, int);

int main()
{
    int n1, m1, n2, m2, k;
    int num = 0;
    bool flag = false;

    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1) {
        std::swap(n1, n2);
        std::swap(m1, m2);
    }
    while(n1 * k >= m1 * num) num++;
    while(n1 * k < m1 * num && m2 * num < n2 * k) {
        if (gcd(num, k) == 1) {
            if (flag) {
                printf(" ");
            }
            printf("%d/%d", num, k);
            flag = true;
        }
        num++;
    }
    printf("\n");

    return 0;
}

int gcd(int m, int n)
{
    int t = 1;
    while (t) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}
