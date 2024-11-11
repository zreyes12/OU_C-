//define class Gradebook that contains a coursename data member and member functions to set and get its value; create and manipulate a gradebook 
//object with thesefuntions;

#include <iostream>
#include <string>

using namespace std;

//Gradebook class definition
class Gradebook {
    public:

        //function that sets the course name
        void setCourseName(string name) {
            courseName = name; //store the course name in the object
            }

    //function that gets the course name
    string getCourseName() const  {

        return courseName; //return the object's courseName
            }

    //function that displays a welcome message
    void displayMessage() const  {

        //This statement calls getCourseName to get the name of this Gradebook represents
        cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
            }

    private:
 
        string courseName; //course name for this Gradebook
    };
    
    int main()  {
        string nameOfCourse; //string of characters to store the course name
        Gradebook myGradebook; //create a Gradebook object named myGradebook
    
        //display initial value of courseName
        cout << "Initial course name is: " << myGradebook.getCourseName() << endl;

        //prompt for, input and set course name
        cout << "\nPlease enter the course name:" << endl;
        getline( cin, nameOfCourse ); //read a course name with blanks
        myGradebook.setCourseName(nameOfCourse); //set the course name

        cout << endl; //outputs a blank line
        myGradebook.displayMessage(); //display message with new course name
        }
