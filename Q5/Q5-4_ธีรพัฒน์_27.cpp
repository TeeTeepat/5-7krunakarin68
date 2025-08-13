#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please input number of items: ";
    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double price;
        int amount;
        cout << "Please input price and amount: ";
        cin >> price >> amount;
        sum += price * amount;
    }

    cout << "Total price is " << sum << " Baht" << endl;

    double discount = 0;
    if (sum <= 10000) {
        discount = sum * 0.02;
    } else if (sum <= 50000) {
        discount = (10000 * 0.02) + ((sum - 10000) * 0.03);
    } else {
        discount = (10000 * 0.02) + (40000 * 0.03) + ((sum - 50000) * 0.04);
    }

    double net = sum - discount;

    cout << "Discount amount is " << discount << " Baht" << endl;
    cout << "Amount to pay after discount is " << net << " Baht" << endl;

    return 0;
}
