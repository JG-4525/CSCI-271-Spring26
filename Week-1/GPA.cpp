#include <iostream>
using namespace std;

int main() {
    
    //variable declaration
    double num1 = 0, num2 = 0, num3 = 0;
    // User prompt. First part
    cout << "Enter three grades, confirm each one of them:\n";
    cin >> num1 >> num2 >> num3;
    double total = num1 + num2 + num3, endl;
    cout << "The Average GPA is: " << total/3, endl;
    return 0;
}
