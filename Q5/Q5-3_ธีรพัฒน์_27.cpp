#include <iostream>
using namespace std;

int main(){

    for(int i = 2; i<= 4; i++){
        for(int j = 1; j<=12; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
    }

    return 0;
}