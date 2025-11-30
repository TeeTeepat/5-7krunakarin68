#include <iostream>
using namespace std;

int main() {
    int a[5] = {17, 9, 52, -33, 29};

    int Max = a[0];
    int Min = a[0];

    
    for (int i = 1; i < 5; i++) {
        if (a[i] > Max)
            Max = a[i];
        if (a[i] < Min)
            Min = a[i];
    }

    cout << "Max = " << Max << endl;
    cout << "Min = " << Min << endl;

    return 0;
}
