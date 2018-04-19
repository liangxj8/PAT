#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    int x, y;
    string cur_athlete;
    string champion_id;
    string rookie_id;
    float score;
    float champion_score = 150;
    float rookie_score = 0;

    cin >> N;
    while (N--) {
        cin >> cur_athlete >> x >> y;
        score = sqrt(x * x + y * y);
        if (score < champion_score) {
            champion_id = cur_athlete;
            champion_score = score;
        }
        if (score > rookie_score) {
            rookie_id = cur_athlete;
            rookie_score = score;
        }
    }
    cout << champion_id << " " << rookie_id << endl;

    return 0;
}
