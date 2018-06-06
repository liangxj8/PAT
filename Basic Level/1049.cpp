#include <cstdio>
int main()
{
    int n;
    double tmp;
    double result = 0;

    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lf", &tmp);
        result += tmp * i * (n - i + 1);
    }
    printf("%.2f", result);

    return 0;
}
