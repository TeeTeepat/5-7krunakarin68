#include <iostream>
using namespace std;

int main(){
        string name,id;
        int thai,math,cs;
        cout << "Enter name : " << endl;
        cin >> name;
        cout << "Enter student ID : " << endl;
        cin >> id;
        cout << "Enter Thai : " << endl;
        cin >> thai;
        cout << "Enter Math : " << endl;
        cin >> math;
        cout << "Enter CS : " << endl;
        cin >> cs;
        cout << endl << endl << "============" << endl << endl;

        cout << "Hi," << name << " ID:" << id << endl << " Sum = " << thai+math+cs << endl << endl << "Average = " << (double)(thai+math+cs)/3;
        
}