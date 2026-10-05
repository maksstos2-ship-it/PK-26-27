#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float P = 0.0f, R = 0.0f, I = 0.0f;
    int T = 0;
    I = (P * T * R)/100;

    cout << "P = ";
    cin >> P;
    cout << "T = ";
    cin >> T;
    cout << "R = ";
    cin >> R;
    cout << "Wynik rzeczywisty: " << fixed << setprecision(2) << I << endl;
    cout << "Wynik całkowity: " << static_cast<int>(I) << endl;

    return 0;
}