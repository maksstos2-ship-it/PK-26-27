#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float promien;
    float pi = 3.14;
    int x = 2;

    cout << "R = ";
    cin >> promien;

    cout << "Obwód: " << x*pi*promien << endl;
    cout << "Pole: " << fixed << setprecision(2) << pi*(promien*promien) << endl;
    return 0;
}