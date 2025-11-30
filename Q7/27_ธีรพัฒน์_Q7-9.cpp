#include <iostream>
using namespace std;

int main() {
    int score[20];
    int n;

    cout << "Enter number of students : ";
    cin >> n;

  
    for (int i = 0; i < n; i++) {
        cout << "Enter score of student " << i + 1 << " : ";
        cin >> score[i];

    }

    int Max = score[0];
    int Min = score[0];
    int sum = score[0];

    for (int i = 1; i < n; i++) {
        if (score[i] > Max) Max = score[i];
        if (score[i] < Min) Min = score[i];
        sum += score[i];
    }

    float Avg = (float)sum / n;

    cout << "\nMax Score = " << Max << endl;
    cout << "Min Score = " << Min << endl;
    cout << "Average = " << Avg << endl;

    return 0;
}
