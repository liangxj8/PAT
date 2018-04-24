#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int i, j;
    int N, M;
    int G1, G2;
    int max_s, min_s;
    int sum, count;
    vector<int> score;

    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> G2;
        score.clear();
        for (j = 1; j < N; j++) {
            cin >> G1;
            if (G1 >= 0 && G1 <= M) {
                score.push_back(G1);
            }
        }
        sum = 0;
        count = 0;
        max_s = 0;
        min_s = M;
        for (vector<int>::iterator it = score.begin(); it != score.end(); it++) {
            max_s = *it > max_s ? *it : max_s;
            min_s = *it < min_s ? *it : min_s;
            count++;
            sum += *it;
        }
        G1 = (sum - max_s - min_s) / (count - 2);
        cout << round((G1 + G2) / 2.0) << endl;
    }

    return 0;
}
