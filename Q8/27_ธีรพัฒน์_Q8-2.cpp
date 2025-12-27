#include <iostream>
using namespace std;

int main() {
    int score[3][3], ans[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Input score[" << i << "][" << j << "] : ";
            cin >> score[i][j];
            ans[i][j] = score[i][j] * score[i][j];
        }
    }

    cout << "ans[3][3] =" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}