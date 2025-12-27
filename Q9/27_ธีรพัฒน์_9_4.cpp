#include <iostream>
using namespace std;

float toCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float toFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float temp;
    cout << "Enter temperature: "; cin >> temp;
    cout << temp << " F = " << toCelsius(temp) << " C" << endl;
    cout << temp << " C = " << toFahrenheit(temp) << " F" << endl;
    return 0;
}