#include <iostream>
using namespace std;

int main() {
    
    //variable declaration
    double num1 = 0, num2 = 0;
    // User prompt. First part
    cout << "Enter First Number:";
    cin >> num1;
    cout << "Enter Second Number:";
    cin >> num2;
    // Results
    cout << "Addition: " << num1 + num2 << "\nDifference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << "\nQuotient: " << num1 / num2 << endl;
    return 0;
    
}
