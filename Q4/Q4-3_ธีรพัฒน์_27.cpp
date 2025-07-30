#include <iostream>
using namespace std;

int main(){
    
    int a;
    cout << "Please input area : ";
    cin >> a;
    string tem = "Total service costs : ";
    if(a < 80) cout << tem << a*12.5 << " baht";
    else if(a < 200) cout << tem << a*10 << " baht";
    else if(a <= 400) cout << tem << a*7.5 << " baht";
    else cout << tem << a*5 << " baht";

    return 0;
}