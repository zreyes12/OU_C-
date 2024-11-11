// conversion-program to convert temperature from Celsius degrees into Fahrenheit:
// Fahrenheit = celsius * (212 - 32)/100 + 32

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int nNumberofArgs, char* pszArgs[])   {

    //enter the temperature in Celsius
    int celsius;
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> celsius;

    //calculate conversion factor for Celsius to Fahrenheit

    int factor = 212 - 32;
    
    // use conversion factor to convert Celsius into Fahrenheit values

    int fahrenheit;

    fahrenheit = factor * celsius / 100 + 32;

    //output the results followed by a newline.
    
    cout << "Fahrenheit value is : " << fahrenheit << endl;

    //wait until user is ready before terminating program to allow the user to see the program results

    cout << "press enter to continue..." << endl;
    cin.ignore (10, '\n');
    cin.get();
    
    return 0;
    }
