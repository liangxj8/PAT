#include <iostream>
using namespace std;

struct student
{
    string name;
    string id;
};

int main()
{
    int N;
    int score;
    int max = 0;
    int min = 100;
    string name, id;
    student best, worst;

    cin >> N;
    while (N--) {
        cin >> name >> id >> score;
        if (score > max) {
            max = score;
            best.name = name;
            best.id = id;
        }
        if (score < min) {
            min = score;
            worst.name = name;
            worst.id = id;
        }
    }

    cout << best.name << " " << best.id << endl;
    cout << worst.name << " " << worst.id << endl;

    return 0;
}