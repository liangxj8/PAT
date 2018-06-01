#include <cstdio>

long int a1, b1;
long int a2, b2;

void print(long long int a, long long int b);
long long int gcd(long long int m, long long int n);
void add();
void sub();
void mul();
void div();

int main()
{
    scanf("%ld/%ld %ld/%ld", &a1, &b1, &a2, &b2);
    add();
    sub();
    mul();
    div();

    return 0;
}

void print(long long int a, long long int b)
{
    bool flag, flag1, flag2;
    long long int t, quotient;
    if (a == 0) {
        printf("0");
        return;
    }
    if (b == 0) {
        printf("Inf");
        return;
    }

    if (a < 0) {
        a = 0 - a;
        flag1 = true;
    } else {
        flag1 = false;
    }
    if (b < 0) {
        b = 0 - b;
        flag2 = true;
    } else {
        flag2 = false;
    }
    flag = flag1 ^ flag2;

    t = gcd(a, b);
    a = a / t;
    b = b / t;
    quotient = a / b;
    a = a % b;

    if (flag) {
        printf("(-");
    }
    if (quotient != 0) {
        if (a == 0) {
            printf("%lld", quotient);
        } else {
            printf("%lld %lld/%lld", quotient, a, b);
        }
    } else {
        printf("%lld/%lld", a, b);
    }
    if (flag) {
        printf(")");
    }
}

long long int gcd(long long int m, long long int n)
{
    long long int t = 1;
    while (t) {
        t = m % n;
        m = n;
        n = t;
    }
    return m;
}

void add()
{
    long long int a, b;
    a = a1 * b2 + a2 * b1;
    b = b1 * b2;
    print(a1, b1);
    printf(" + ");
    print(a2, b2);
    printf(" = ");
    print(a, b);
    printf("\n");
}

void sub()
{
    long long int a, b;
    a = a1 * b2 - a2 * b1;
    b = b1 * b2;
    print(a1, b1);
    printf(" - ");
    print(a2, b2);
    printf(" = ");
    print(a, b);
    printf("\n");
}

void mul()
{
    long long int a, b;
    a = a1 * a2;
    b = b1 * b2;
    print(a1, b1);
    printf(" * ");
    print(a2, b2);
    printf(" = ");
    print(a, b);
    printf("\n");
}

void div()
{
    long long int a, b;
    a = a1 * b2;
    b = b1 * a2;
    print(a1, b1);
    printf(" / ");
    print(a2, b2);
    printf(" = ");
    print(a, b);
    printf("\n");
}
