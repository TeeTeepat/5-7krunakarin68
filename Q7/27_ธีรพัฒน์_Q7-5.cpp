#include <iostream>
using namespace std;

char findGrade(int score) {
    if (score >= 90 && score <= 100) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    int score[5];
    char grade[5];

    cout << "Calculate Grade Program\n";

   
    for (int i = 0; i < 5; i++) {
        cout << "Enter Score Student " << i + 1 << " : ";
        cin >> score[i];
        grade[i] = findGrade(score[i]);
    }

    cout << "\nShow Student Grade\n";

  
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << "\n";
        cout << "     Score " << score[i] << " Grade " << grade[i] << "\n";
    }

    cout << "\nThank You...\n";

    return 0;
}
