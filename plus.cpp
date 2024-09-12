#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Intentional bug: subtracting instead of adding
    result = num1 - num2;

    cout << "The sum is: " << result << endl;

    return 0;
}