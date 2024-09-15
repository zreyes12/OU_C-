{"filter":false,"title":"Driver.cpp","tooltip":"/Driver.cpp","undoManager":{"mark":18,"position":18,"stack":[[{"start":{"row":0,"column":0},"end":{"row":22,"column":1},"action":"remove","lines":["#include <iostream>","#include <vector>","#include \"Polygon.h\"","using namespace std;","","int main() {","","    // Creates polygons and prints their sizes","    vector<Point> exampleCorners;","","    exampleCorners.push_back(Point(0.1, -1.0));","    exampleCorners.push_back(Point(0.1, 1.1));","    exampleCorners.push_back(Point(1.1, 2.2));","    exampleCorners.push_back(Point(1.3, -1.0));","    exampleCorners.push_back(Point(0.5, -1.2));","    Polygon examplePolygon = Polygon(exampleCorners);","    cout << \"Area of Example Polygon is: \" << examplePolygon.getArea() << endl;","    Polygon emptyPolygon;","    cout << \"Area of Empty Polygon is: \" << emptyPolygon.getArea() << endl;","    ","    return 0;","","}"],"id":101},{"start":{"row":0,"column":0},"end":{"row":28,"column":1},"action":"insert","lines":["#include <iostream>","#include <vector>","#include \"Polygon.h\"","#include \"Geometer.h\"","using namespace std;","","int main() {","\tvector<Polygon> polygons;","\t","\t// Creates polygons and prints their sizes","\tvector<Point> exampleCorners;","\texampleCorners.push_back(Point(0.1,-1.0));","\texampleCorners.push_back(Point(0.1,1.1));","\texampleCorners.push_back(Point(1.1,2.2));","\texampleCorners.push_back(Point(1.3,-1.0));","\texampleCorners.push_back(Point(0.5,-1.2));","","\tPolygon examplePolygon = Polygon(exampleCorners);","\tcout << \"Area of Example Polygon is: \" << examplePolygon.getArea() << endl;","\tPolygon emptyPolygon;","\tcout << \"Area of Empty Polygon is: \" <<\temptyPolygon.getArea() << endl;","\t","\tpolygons.push_back(examplePolygon);","\tpolygons.push_back(emptyPolygon);","\tdouble totalArea = Geometer::getTotalArea(polygons);","\tcout << \"Total area of polygons is: \" << totalArea << endl;","\t\t","\treturn 0;","}"]}],[{"start":{"row":15,"column":43},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":105},{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":16,"column":1},"end":{"row":19,"column":43},"action":"insert","lines":["\texampleCorners.push_back(Point(0.1,1.1));","\texampleCorners.push_back(Point(1.1,2.2));","\texampleCorners.push_back(Point(1.3,-1.0));","\texampleCorners.push_back(Point(0.5,-1.2));"],"id":106}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"remove","lines":["\t"],"id":107},{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"remove","lines":["\t"]}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "],"id":108}],[{"start":{"row":18,"column":34},"end":{"row":18,"column":35},"action":"remove","lines":["3"],"id":109}],[{"start":{"row":18,"column":34},"end":{"row":18,"column":35},"action":"insert","lines":["8"],"id":110}],[{"start":{"row":17,"column":34},"end":{"row":17,"column":35},"action":"remove","lines":["1"],"id":111}],[{"start":{"row":17,"column":34},"end":{"row":17,"column":35},"action":"insert","lines":["6"],"id":112}],[{"start":{"row":16,"column":37},"end":{"row":16,"column":38},"action":"remove","lines":["1"],"id":113}],[{"start":{"row":16,"column":37},"end":{"row":16,"column":38},"action":"insert","lines":["4"],"id":114}],[{"start":{"row":16,"column":41},"end":{"row":16,"column":42},"action":"remove","lines":["1"],"id":115}],[{"start":{"row":16,"column":41},"end":{"row":16,"column":42},"action":"insert","lines":["7"],"id":116}],[{"start":{"row":17,"column":38},"end":{"row":17,"column":39},"action":"remove","lines":["2"],"id":117}],[{"start":{"row":17,"column":38},"end":{"row":17,"column":39},"action":"insert","lines":["9"],"id":118}],[{"start":{"row":18,"column":39},"end":{"row":18,"column":40},"action":"remove","lines":["0"],"id":119}],[{"start":{"row":18,"column":39},"end":{"row":18,"column":40},"action":"insert","lines":["3"],"id":120}],[{"start":{"row":19,"column":39},"end":{"row":19,"column":40},"action":"remove","lines":["2"],"id":121}],[{"start":{"row":19,"column":39},"end":{"row":19,"column":40},"action":"insert","lines":["7"],"id":122}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":7,"column":0},"end":{"row":7,"column":26},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1655423321768,"hash":"348502795c1742126e6cef25de149de1ab93338f"}