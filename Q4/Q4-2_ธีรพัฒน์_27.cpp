#include <iostream>
using namespace std;

int main(){

    string name,id;
    int math,com,sci;
    cout << "Enter Name : " << endl;
    cin >> name;
    cout << "Enter ID : " << endl;
    cin >> id;
    cout << "Enter Computer : " << endl;
    cin >> com;
    cout << "Enter Sciences : " << endl;
    cin >> sci;
    cout << "********************" << endl;
    cout << name << ' ' << "ID : " << id << endl;
    cout << "*****Pass******" << endl;
    if(math >= 50) cout << "Math" << endl;
    if(com >= 50) cout << "Computer" << endl;
    if(sci >= 50) cout << "Sciences" << endl;

    return 0;
}