#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Input principal amount: ";
    cin >> a;
    cout << "Input rate of interest: ";
    cin >> b;
    cout << "Input time(in years): ";
    cin >> c;
    cout << "Simple interest is " << a * b * c/100 << ".";
    return 0;
}