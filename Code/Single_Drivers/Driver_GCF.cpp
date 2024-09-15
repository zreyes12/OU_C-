#include <iostream>

using namespace std;

int DriverEuclidGCF (int n1, int n2) {
    
    if (n2 == 0) {

        return n1;

    } // end if
    
    return DriverEuclidGCF(n2, n1 % n2);

} // End DriverEuclidGCF


int main() {

    int a = 11;
    int b = 5;
    int c = DriverEuclidGCF(a, b);
    
    
    cout << "Greatest common factor of " << a 
         << " and " << b << " is " << c << endl;
     
    return 0;
     
} // End main