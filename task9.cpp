#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Input a number: ";
    cin >> a;
    cout << "Input 2nd number: ";
    cin >> b;
    cout << "Input 3rd number: ";
    cin >> c;
    cout << "The average is " << (a + b + c)/3 << ".";
    return 0;
}