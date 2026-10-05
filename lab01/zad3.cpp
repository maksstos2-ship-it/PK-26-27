#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Suma: " << a+b << endl;
    cout << "Różnica: " << a-b << endl;
    cout << "Iloczyn: " << a*b << endl;

    return 0;
}