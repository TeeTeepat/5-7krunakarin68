#include <iostream>
using namespace std;

int main(){

    char a;
    cout << "Enter character : " << endl;
    cin >> a;
    if(islower(a)) cout << (char)toupper(a);
    else cout << (char)tolower(a);


    return 0;
}