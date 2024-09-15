{"filter":false,"title":"UnsortedDriver.cpp","tooltip":"/UnsortedDriver.cpp","undoManager":{"mark":44,"position":44,"stack":[[{"start":{"row":0,"column":0},"end":{"row":24,"column":1},"action":"insert","lines":["#include <iostream>","#include <vector>","#include \"Polygon.h\"","using namespace std;","int main() {","vector<Polygon> polygons;","// Creates polygons and prints their sizes","vector<Point> exampleCorners;","exampleCorners.push_back(Point(0.1,-1.0));","exampleCorners.push_back(Point(0.1,1.1));","exampleCorners.push_back(Point(1.1,2.2));","exampleCorners.push_back(Point(1.3,-1.0));","exampleCorners.push_back(Point(0.5,-1.2));","Polygon examplePolygon = Polygon(exampleCorners);","cout << \"Area of Example Polygon is: \" << examplePolygon.getArea() << endl;","Polygon emptyPolygon;","cout << \"Area of Empty Polygon is: \" << emptyPolygon.getArea() << endl;","polygons.push_back(examplePolygon);","polygons.push_back(emptyPolygon);","for (int i=0; i < polygons.size(); i++) {","cout << \"Area of polygon \" << i << \" is \" << polygons[i].getArea() << ","endl;","}","return 0;","}"],"id":1}],[{"start":{"row":3,"column":20},"end":{"row":4,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":2,"column":20},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":7,"column":0},"end":{"row":7,"column":4},"action":"insert","lines":["    "],"id":4}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"insert","lines":["    "],"id":5}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"insert","lines":["    "],"id":6}],[{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"insert","lines":["    "],"id":7}],[{"start":{"row":11,"column":0},"end":{"row":11,"column":4},"action":"insert","lines":["    "],"id":8}],[{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "],"id":9}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "],"id":10}],[{"start":{"row":14,"column":0},"end":{"row":14,"column":4},"action":"insert","lines":["    "],"id":11}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "],"id":12}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "],"id":13}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "],"id":14}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":4},"action":"insert","lines":["    "],"id":15}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"insert","lines":["    "],"id":16}],[{"start":{"row":20,"column":0},"end":{"row":20,"column":4},"action":"insert","lines":["    "],"id":17}],[{"start":{"row":21,"column":0},"end":{"row":21,"column":4},"action":"insert","lines":["    "],"id":18}],[{"start":{"row":22,"column":0},"end":{"row":22,"column":4},"action":"insert","lines":["    "],"id":19}],[{"start":{"row":22,"column":4},"end":{"row":22,"column":8},"action":"insert","lines":["    "],"id":20}],[{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"insert","lines":["    "],"id":21}],[{"start":{"row":23,"column":4},"end":{"row":23,"column":8},"action":"insert","lines":["    "],"id":22}],[{"start":{"row":23,"column":4},"end":{"row":23,"column":8},"action":"remove","lines":["    "],"id":23},{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"remove","lines":["    "]},{"start":{"row":22,"column":78},"end":{"row":23,"column":0},"action":"remove","lines":["",""]},{"start":{"row":22,"column":77},"end":{"row":22,"column":78},"action":"remove","lines":[" "]}],[{"start":{"row":22,"column":77},"end":{"row":22,"column":78},"action":"insert","lines":[" "],"id":24}],[{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"insert","lines":["    "],"id":25}],[{"start":{"row":23,"column":5},"end":{"row":24,"column":0},"action":"insert","lines":["",""],"id":26},{"start":{"row":24,"column":0},"end":{"row":24,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":25,"column":0},"end":{"row":25,"column":4},"action":"insert","lines":["    "],"id":27}],[{"start":{"row":20,"column":37},"end":{"row":21,"column":0},"action":"insert","lines":["",""],"id":28},{"start":{"row":21,"column":0},"end":{"row":21,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":21,"column":0},"end":{"row":21,"column":4},"action":"remove","lines":["    "],"id":29}],[{"start":{"row":18,"column":75},"end":{"row":19,"column":0},"action":"insert","lines":["",""],"id":30},{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"remove","lines":["    "],"id":31}],[{"start":{"row":17,"column":25},"end":{"row":18,"column":0},"action":"insert","lines":["",""],"id":32},{"start":{"row":18,"column":0},"end":{"row":18,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":4},"action":"remove","lines":["    "],"id":33}],[{"start":{"row":16,"column":79},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":34},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"remove","lines":["    "],"id":35}],[{"start":{"row":15,"column":53},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":36},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"remove","lines":["    "],"id":37}],[{"start":{"row":14,"column":46},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":38},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"remove","lines":["    "],"id":39}],[{"start":{"row":6,"column":12},"end":{"row":7,"column":0},"action":"insert","lines":["",""],"id":40},{"start":{"row":7,"column":0},"end":{"row":7,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":7,"column":0},"end":{"row":7,"column":4},"action":"remove","lines":["    "],"id":41}],[{"start":{"row":28,"column":14},"end":{"row":28,"column":15},"action":"insert","lines":[" "],"id":42}],[{"start":{"row":28,"column":16},"end":{"row":28,"column":17},"action":"insert","lines":[" "],"id":43}],[{"start":{"row":0,"column":19},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":44}],[{"start":{"row":1,"column":0},"end":{"row":1,"column":24},"action":"insert","lines":["#include <bits/stdc++.h>"],"id":45}]]},"ace":{"folds":[],"scrolltop":110,"scrollleft":0,"selection":{"start":{"row":29,"column":0},"end":{"row":29,"column":47},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":8,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1657852917655,"hash":"86e29c9d5292ed3ca656d0af8ebe7b7b89930369"}