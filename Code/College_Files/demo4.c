//define class gradebook with a member function display messsage,
// create a Gradebook object, and call its display message function.

#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

//gradebook class definition
class Gradebook {
public:
    //funtion that displays a welcome message to the gradebook
    void displayMessage(string yes) const {
        
        cout << "welcome to the Grade Book for\n" << yes << "!" <<endl;
        }
};
   
int main()  {

    string courseName; //string of characters to store the course name
    Gradebook myGradebook; //create a Gradebook object named myGradebook
    
    cout << "please enter the course name: " << endl;
    getline( cin, courseName ); //read a course name with blanks
    cout << endl; 

    //call myGradebook's display message function
    //pass nameOfCourse as an argument

    myGradebook.displayMessage( courseName );
    //call object's displayMessage function
} 
