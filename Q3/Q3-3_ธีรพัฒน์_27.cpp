#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = n/1000;
    int hu5 = (n-(k*1000))/500;
    int hun = (n-(k*1000)-(hu5*500))/100;
    cout << "B1000 = " << k << endl << "B500 = " << hu5 << endl << "B100 = " << hun;
}