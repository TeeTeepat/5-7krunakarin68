#include <iostream>
using namespace std;

float Add(float a, float b) { return a + b; }
float Difference(float a, float b) { return a - b; }
float Multiply(float a, float b) { return a * b; }
float Division(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float n1, n2;
    int choice;
    cout << "Please Enter Number 1 : "; cin >> n1;
    cout << "Please Enter Number 2 : "; cin >> n2;
    cout << "Menu\n1.Addition\n2.Difference\n3.Multiply\n4.Division\nPlease select Menu : ";
    cin >> choice;

    if(choice == 1) cout << "Result: " << Add(n1, n2);
    else if(choice == 2) cout << "Result: " << Difference(n1, n2);
    else if(choice == 3) cout << "Result: " << Multiply(n1, n2);
    else if(choice == 4) cout << "Result: " << Division(n1, n2);
    
    return 0;
}