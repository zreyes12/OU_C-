#ifndef GEOMETER_H
#define GEOMETER_H
#include <vector>
#include "Polygon.h"

using namespace std;

class Geometer {


    public:
        
        static double getTotalArea(vector<Polygon> polygons);
};
#endif // !SHAPE_H