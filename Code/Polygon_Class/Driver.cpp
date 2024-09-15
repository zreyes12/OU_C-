#include <iostream>
#include <vector>
#include "Polygon.h"
#include "Geometer.h"
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
    exampleCorners.push_back(Point(0.4,1.7));
	exampleCorners.push_back(Point(1.6,2.9));
	exampleCorners.push_back(Point(1.8,-1.3));
	exampleCorners.push_back(Point(0.5,-1.7));

	Polygon examplePolygon = Polygon(exampleCorners);
	cout << "Area of Example Polygon is: " << examplePolygon.getArea() << endl;
	Polygon emptyPolygon;
	cout << "Area of Empty Polygon is: " <<	emptyPolygon.getArea() << endl;
	
	polygons.push_back(examplePolygon);
	polygons.push_back(emptyPolygon);
	double totalArea = Geometer::getTotalArea(polygons);
	cout << "Total area of polygons is: " << totalArea << endl;
		
	return 0;
}