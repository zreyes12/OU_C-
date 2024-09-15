Compiling .cpp/.h files within Terminal
Structure:
1. g++
2. ".cpp" required files (Note: ".h" files aren't required to be added)
3. -o (file to create)
4. new file

Example: 
g++ Driver.cpp Geometer.cpp Point.cpp Shape.cpp Polygon.cpp -o Driver_Standard

Running the Application:
from source directory of application: "./Driver"

Examples:
(Compiled Application) < (Files required)

Exception_Driver < Exception_Driver.cpp

Interrupts_Driver < Interrupts_Driver.cpp

SortSimple < IntSortSimple.cpp

Unsorted < UnsortedDriver.cpp

Driver_Main < Driver.cpp, Point.cpp, Shape.cpp, Polygon.cpp, Geometer.cpp