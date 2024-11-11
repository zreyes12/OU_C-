#include <iostream>

using std::cout; //program uses cout
using std::cin; //program uses cin
using std::endl; //program uses endl

    int main() {
    int num1 = 0, num2 = 0;

    cout<<"enter two integers to compare: "; //prompt user for data
    cin >> num1 >> num2; //read two integers from user<=

    if (num1 == num2)
    cout << num1 << " == " << num2 << endl;

    if (num1 != num2)
    cout << num1 << " != " << num2 << endl;

    if (num1 < num2)
    cout << num1 << " < " << num2 << endl;

    if (num1 > num2)
    cout << num1 << " > " << num2 << endl; 

    if (num1 <= num2)
    cout << num1 << " <= " << num2 << endl;

    if (num1 >= num2)
    cout << num1 << " >= " << num2 << endl;

   }
