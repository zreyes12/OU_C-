#include "Geometer.h"

double Geometer::getTotalArea(vector<Polygon> polygon) {
    
    double tempTotal = 0;
    
    for (int i = 0; i < polygon.size(); i++) {
        
        tempTotal += polygon[i].getArea();
        
    }
  return tempTotal;  
};