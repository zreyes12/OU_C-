#include "Shape.h"

Shape::Shape() {
    
    this->center = Point();
}

Shape::Shape(Point center) {
    
    this->center = center;
}