#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include "Polygon.h"

using namespace std;

int main() {

    vector<Polygon> polygons;
    // Creates polygons and prints their sizes
    vector<Point> exampleCorners;
    exampleCorners.push_back(Point(0.1,-1.0));
    exampleCorners.push_back(Point(0.1,1.1));
    exampleCorners.push_back(Point(1.1,2.2));
    exampleCorners.push_back(Point(1.3,-1.0));
    exampleCorners.push_back(Point(0.5,-1.2));

    Polygon examplePolygon = Polygon(exampleCorners);

    cout << "Area of Example Polygon is: " << examplePolygon.getArea() << endl;

    Polygon emptyPolygon;

    cout << "Area of Empty Polygon is: " << emptyPolygon.getArea() << endl;

    polygons.push_back(examplePolygon);
    polygons.push_back(emptyPolygon);

    for (int i = 0; i < polygons.size(); i++) {
        cout << "Area of polygon " << i << " is " << polygons[i].getArea() << endl;
    }
    
    return 0;
}