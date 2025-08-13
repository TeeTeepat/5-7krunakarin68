#include <iostream>
using namespace std;

int main(){

    int count_odd = 0 , count_even = 0;
    int cur = -1;
    while(cur != 0){
        cout << "Please enter number :";
        cin >> cur;
        cout << endl;
        if(cur % 2==0) count_even++;
        else count_odd++;
    }
    cout << "Number of even number = " << --count_even << endl;
    cout << "Number of odd number = " << count_odd << endl;


    return 0;
}