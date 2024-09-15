#include "Point.h"
#include <iostream>

using namespace std;

int swap (Point & a, Point & b) {

    Point temp = Point(a.getX(), b.getY());

    a.setX(b.getX());
    a.setY(b.getY());
    
    b.setX(temp.getX());
    b.setY(temp.getY());

    cout << "Inside swap, a.x is: " << a.getX() 
         << " and b.x is: " << b.getX() << endl;
       
    return 0;

} // End swap


int main() {

    Point a = Point(1.0, 2.0);
    Point b = Point (3.0, 4.0);
    
    cout << "Before swap, a.x is:  " << a.getX() 
         << " and b.x is: " << b.getX() << endl;
     
    swap (a, b);
    
    cout << "After swap, a.x is:  " << a.getX() 
         << " and b.x is: " << b.getX() << endl;

    return 0;
     
} // End main
