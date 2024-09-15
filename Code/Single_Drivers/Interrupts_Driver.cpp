#include <csignal>
#include <iostream>

using namespace std;

//create function signal_handler
void signal_handler (int signal_nam) {
    
    
    //error came back, display "??" to provide bad example.
    cout << "???" << endl;
    
    //What was detected?
    cout << "Floating Point Error Detected." << endl;
    
    //What would you like to let them know.
    cout << "Can take other actions, such as saving open files." << endl;
    
    exit(1);

} // end signal_handler

//create main procedure
int main() {
    
    signal(SIGFPE, signal_handler);
    
    for (int i = -10; i < 10; i++) {

        cout << "The integer part of 10 divided by " << i << " is " << 10/i 
             << "." << endl;

    } // end for loop
    
    return 0;
    
} // end main