#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int m, n, tol;
    int x, y, color;
    int found = 0;
    bool spec;
    vector<vector<int> > img;
    map<int, int> mmap;

    scanf("%d %d %d", &n, &m, &tol);
    img.resize(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &img[i][j]);
            mmap[img[i][j]]++;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            spec = true;
            spec = i > 0 && j > 0 && abs(img[i][j] - img[i - 1][j - 1]) <= tol ? false: spec;
            spec = i > 0 && abs(img[i][j] - img[i - 1][j]) <= tol ? false: spec;
            spec = i > 0 && j < n - 1 && abs(img[i][j] - img[i - 1][j + 1]) <= tol ? false: spec;
            spec = j > 0 && abs(img[i][j] - img[i][j - 1]) <= tol ? false: spec;
            spec = j < n - 1 && abs(img[i][j] - img[i][j + 1]) <= tol ? false: spec;
            spec = i < m - 1 && j > 0 && abs(img[i][j] - img[i + 1][j - 1]) <= tol ? false: spec;
            spec = i < m - 1 && abs(img[i][j] - img[i + 1][j]) <= tol ? false: spec;
            spec = i < m - 1 && j < n - 1 && abs(img[i][j] - img[i + 1][j + 1]) <= tol ? false: spec;
            if (spec && mmap[img[i][j]] == 1) {
                found++;
                x = i;
                y = j;
                color = img[i][j];
            }
        }
    }
    if (!found) {
        printf("Not Exist\n");
    } else {
        if (found == 1) {
            printf("(%d, %d): %d\n", y + 1, x + 1, color);
        } else {
            printf("Not Unique\n");
        }
    }

    return 0;
}
