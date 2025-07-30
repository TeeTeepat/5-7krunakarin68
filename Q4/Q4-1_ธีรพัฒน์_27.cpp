#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "input radius  : " << endl;
    cin >> n;
    if(n < 1) cout << "Error";
    else cout << "Area = " << 3.14*n*n;

    return 0;
}