#include <cstdio>
#include <cmath>
int main()
{
    double r1, p1, r2, p2;
    double a, b, c, d;
    double A, B;
    scanf("%lf %lf %lf %lf", &r1, &p1, &r2, &p2);
    a = r1 * cos(p1);
    b = r1 * sin(p1);
    c = r2 * cos(p2);
    d = r2 * sin(p2);
    A = a * c - b * d;
    B = a * d + b * c;
    if (A + 0.005 >= 0 && A < 0) {
        printf("0.00");
    } else {
        printf("%.2f", A);
    }
    if(B >= 0) {
        printf("+%.2fi", B);
    } else if (B + 0.005 >= 0 && B < 0) {
        printf("+0.00i");
    } else {
        printf("%.2fi", B);
    }
    return 0;
}
