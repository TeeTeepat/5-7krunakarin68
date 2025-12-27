#include <iostream>
#include <cmath>
using namespace std;

void circle() {
    float r;
    cout << "Enter radius: "; cin >> r;
    cout << "Area: " << 3.14 * r * r << endl;
}
void triangle() {
    float b, h;
    cout << "Enter base and height: "; cin >> b >> h;
    cout << "Area: " << 0.5 * b * h << endl;
}
void rectangle() {
    float w, l;
    cout << "Enter width and length: "; cin >> w >> l;
    cout << "Area: " << w * l << endl;
}

int main() {
    int choice;
    cout << "Menu\n1.Circle\n2.Triangle\n3.Rectangle\nPlease select shape to calculate: ";
    cin >> choice;
    switch(choice) {
        case 1: circle(); break;
        case 2: triangle(); break;
        case 3: rectangle(); break;
        default: cout << "Invalid choice";
    }
    return 0;
}