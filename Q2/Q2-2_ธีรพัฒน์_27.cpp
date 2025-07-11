#include <iostream>
using namespace std;

int main(){
    cout << "Enter med-term :" << endl;
    int mid,final,hw;
    cin >> mid;
    cout << "Enter Final : " << endl;
    cin >> final;
    cout << "Enter homework : " << endl;
    cin >> hw;
    cout << "Total = " << mid+final+hw << endl;
    double per = (mid+final+hw)/3;
    cout << "Percent =" << per;
}