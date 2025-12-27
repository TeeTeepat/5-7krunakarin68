#include <iostream>
using namespace std;

int main() {
    int a[3][2], b[2][3];

   
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Input a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }

    cout << "a[3][2] =" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "b[2][3] =" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}