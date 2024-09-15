#include <iostream>
#include <array>

using namespace std;

int main() {
    
    //initialize array
    array<int, 10> intArray;
    
    for (int i = 0; i < 10; i++) {
        
        
        //add try 
        try {
            intArray.at(i) = i*2;
            
        } //end try
        
        //add catch to determine if there was an error
        catch (...) {
            
            //What do we want to do/say if error occured.
            cout << "Index out of boinds on initalization." << endl;
            
        } // end catch
    } //end for loop
    
    for (int i = 10; i > 0; i--) {

        //add try
        try {
            //What do we want to try?
            cout << "Result: " << intArray.at(i) << endl;

        } //end try

        //add catch to determine if there was an error
        catch (...) {

            //What do we want to do/say if error occured.
            cout << "Index out of bounds on use." << endl;

        } //end catch 
    } // end for loop
    
} //end main 