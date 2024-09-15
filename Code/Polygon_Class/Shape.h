#ifndef SHAPE_H
#define SHAPE_H
#include "Point.h"

class Shape {
    
    private:
        //Create a default constructor
        Point center;
        
    public:

        Shape();
        Shape(Point center);
        virtual double getArea() = 0;
        
};
#endif // !SHAPE_H