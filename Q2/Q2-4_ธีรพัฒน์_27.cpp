#include <iostream>
using namespace std;

int main(){
    int h,w;
    cout << "Enter Height(cm) : " << endl;
    cin >> h;
    cout << "Enter Weight(kg) : " << endl;
    cin >> w;
    double hh = (double)(h/100.0);
    cout << "BMI = " << (double)(w/((hh)*(hh)));

}