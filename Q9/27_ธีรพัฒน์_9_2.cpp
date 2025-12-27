#include <iostream>
#include <cmath>
using namespace std;


void surfaceCone() {
    float r, l;
    cout << "Enter radius and slant height: "; cin >> r >> l;
    cout << "Total Surface Area: " << (3.14 * r * l) + (3.14 * r * r) << endl;
}


void surfacePrism(float side, float h) {
    float area = (2 * (side * side)) + (4 * (side * h));
    cout << "Surface Area: " << area << endl;
}


float surfacePyramid(float side, float slant) {
    return (side * side) + (0.5 * (4 * side) * slant);
}

int main() {
    int choice;
    do {
        cout << "\nMenu\n1.Cone\n2.Prism\n3.Pyramid\n0.Exit\nSelect: ";
        cin >> choice;
        if(choice == 1) surfaceCone();
        else if(choice == 2) {
            float s, h; cout << "Enter side and height: "; cin >> s >> h;
            surfacePrism(s, h);
        }
        else if(choice == 3) {
            float s, sl; cout << "Enter side and slant height: "; cin >> s >> sl;
            cout << "Surface Area: " << surfacePyramid(s, sl) << endl;
        }
        else if(choice != 0) cout << "Error! Please try again.\n";
    } while(choice != 0);
    return 0;
}