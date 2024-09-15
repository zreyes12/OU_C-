#include <iostream>

using namespace std;

//this one work will work
int not_Init;

int main() {
    
    /*this one will work, but if you compile like this instead
    *g++ Init_Variables.cpp -Wall -o Init_Variables
    you will see you get the warnings of this one.*/
    int not_Init_Main;
    
    
    cout << "The value of not_Init wasn't initalized." << endl 
         << "Val: "<< not_Init << ". Did it work?" << endl;
    
    cout << "The value of not_Init_Main wasn't initalized." << endl 
         << "Val: "<< not_Init_Main << ". Did it work?" << endl;
    
} // End main