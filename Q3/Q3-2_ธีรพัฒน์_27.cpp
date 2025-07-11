#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //กรณีที่มี จน. ปีแค่ 4 หลัก
    int y;
    cin >> y;
    int ny = y+543;
    cout << ny << endl << endl;
    cout << ny/1000 + (ny/100)%10 + (ny/10)%10 + ny%10;
}