#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "Input temperature in Celsius: ";
    cin >> x;
    cout << "Temparature in Fahrenheit: " << (x * 9/5) + 32 << ".";
    return 0;
}