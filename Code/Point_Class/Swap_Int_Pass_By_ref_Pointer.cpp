#include <iostream>

using namespace std;

int swap (int *a, int *b) {
    
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "Inside swap, *a is: " << *a 
         << " and *b is: " << *b << endl;
       
    return 0;

} // End swap


int main() {

    int a = 11;
    int b = 5;
    
    cout << "Before swap, a is:  " << a 
         << " and b is: " << b << endl;
     
    swap (&a, &b);
    
    cout << "After swap, a is:  " << a 
         << " and b is: " << b << endl;
    return 0;
     
} // End main
