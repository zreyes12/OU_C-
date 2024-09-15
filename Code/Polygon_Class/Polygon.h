#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
#include "Shape.h"

using namespace std;

class Polygon : public Shape {
    
    private:

        vector<Point> corners;
        
    public:

        
         Polygon();
            
         Polygon(vector<Point> corners);
            
        double getArea();
            
};

#endif // !POLYGON_H