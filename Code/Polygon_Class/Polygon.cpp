#include "Polygon.h"
#include <cmath>

Polygon::Polygon() {
}

Polygon::Polygon(vector<Point> corners) {

    this->corners = corners;
}

double Polygon::getArea() {

    double sum = 0;

    for (int i = 0; i < corners.size(); i++) {

            if (i == 0) {

                sum = corners[i].getX() *(corners[i+1].getY() - corners[corners.size()-1].getY());
            }      
            else if (i == corners.size()-1) {

                sum += corners[i].getX() * (corners[0].getY() - corners[i -1].getY());
            }
            else {

                sum += corners[i].getX() *  (corners[i+1].getY() - corners[i-1].getY());
    
            }
    
    }
    return 0.5 * abs(sum);
}