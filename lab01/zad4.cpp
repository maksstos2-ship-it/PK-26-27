#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int A;
    int B;
    int C;
    int x = 2;
    
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    cout << "Pole: " << (x*A*B) + (x*A*C) + (x*B*C) << endl;
    cout << "Objętość: " << A*B*C << endl;

    return 0;
}