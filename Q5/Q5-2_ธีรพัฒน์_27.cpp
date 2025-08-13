#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Please enter score : ";
    cin >> n;
    cout << endl;
    int avg = 0;
    for(int i =0; i<n; i++){
        int score = 0;
        cout << "Please enter score : ";
        cin >> score;
        cout << endl;
        if(score < 0 || score > 100){
            cout << "Invalid score";
            i--;
        }
        else avg+= score;
    }

    cout << "Average = " << avg/n << endl;
    cout << "Number of std = " << n << endl;

    return 0; 
}