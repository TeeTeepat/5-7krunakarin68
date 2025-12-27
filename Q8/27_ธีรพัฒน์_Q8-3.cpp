#include <iostream>
using namespace std;

int main() {
    int A[3][2], B[3][2], sum[3][2];

  
    cout << "Input Matrix A (3x2):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }


    cout << "Input Matrix B (3x2):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
            sum[i][j] = A[i][j] + B[i][j]; 
        }
    }


    cout << "Result (A+B) =" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}