#include <iostream>
using namespace std;

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    int studentCount = 0;

    cout << "Please enter scores : " << endl;

    while (studentCount < 80) {
        cin >> score;

        if (score < 0) break;

        if (score >= 80) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else {
            countF++;
        }

        studentCount++;
    }

    cout << "Number of students in each grade :" << endl;
    cout << "A : " << countA << endl;
    cout << "B : " << countB << endl;
    cout << "C : " << countC << endl;
    cout << "D : " << countD << endl;
    cout << "F : " << countF << endl;

    return 0;
}
