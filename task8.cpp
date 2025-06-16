#include <iostream>
using namespace std;

int main () {
    float a;
    float b;
    cout << "Input your weight(in kilograms): ";
    cin >> a;
    cout << "Input your height(in meters): ";
    cin >> b;
    cout << "Your BMI is " << a/(b * b) << ".";
    return 0;
}