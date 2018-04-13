#include <cstdio>
#include <cstring>
int main()
{
    int N, M;
    // type arr[n];
    char sid[14];
    int test, exam;
    struct Student {
        char sid[14];
        int exam;
    };
    Student stu[1005];

    scanf("%d", &N);
    while (N--) {
        scanf("%s %d %d", &sid, &test, &exam);
        // char array cannot assign directly using equal sign!
        // use . but not ->
        strcpy(stu[test].sid, sid);
        stu[test].exam = exam;
    }

    scanf("%d", &M);
    while (M--) {
        scanf("%d", &test);
        printf("%s %d\n", stu[test].sid, stu[test].exam);
    }

    return 0;
}
