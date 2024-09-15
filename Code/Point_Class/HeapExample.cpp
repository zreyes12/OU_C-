#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    
    Point* p1 = new Point (1.0, 2.0);
    
    cout << "For point 1, x is: " << p1->getX()
         << " and y is: " << p1->getY() << endl;
         
    Point* p2 = p1;
    
    cout << "For point 2, x is: " << p2->getX() 
         << " and y is: " << p2->getY() << endl;
           
    p2->setX(10.0);
    p2->setY(-5.0);
    
        
    cout << "For point 2, x is: " << p2->getX() 
         << " and y is: " << p2->getY() << endl;
         
        
    cout << "For point 1, x is: " << p1->getX() 
         << " and y is: " << p1->getY() << endl;
              
         
} // End main