#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<string> Data_Types = 
        {"int", "long int", "short int", "char", 
         "double", "long double","float", "long float", 
         "unsigned float", "signed float"};


    for (int i = 0; i < Data_Types.size(); i++) {

        cout << "The size of a "
             << Data_Types[i] << " "
             << sizeof(Data_Types[i]) 
             << " bytes" << endl;   

    } // End for loop
    
    
    cout << endl << endl << sizeof(string);
    
} // End main