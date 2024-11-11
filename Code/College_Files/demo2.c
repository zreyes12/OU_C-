
#include "iostream"
/* dem.c: My first C program on a Linux */
int main(void)
{
    std::cout << "Hello! This is a C++ program.\n";
     std::cout << "Hello! This is the second line of code hopefully.\n";
    std::cout<< "and the third line and some crazy stuff\nidk\nmore\n\nstuff\n";
    std::cout<< "let's count some integers up\n";

    int num1 =0;
    int num2 = 0;
    int sum = 0; //sum of the two integers
    int num3 = 0, num4 = 0; //comma seperated list of integers
    int sub = 0; //sub of the two integers

    std::cout<<"enter first integer: "; //prompt user for data
    std::cin >> num1; //read an integer

    std::cout<<"enter second integer: "; //prompt user for data
    std::cin >> num2; //read an integer
    
    sum = num1 + num2; //add the numbers; store result in sum
       

    std::cout << "the sum of the two numbers are: " << sum << std::endl;

    std::cout << "Lets try again.\n Please enter first integer: ";
    std::cin >> num3; //read an integer
    
    std::cout<<"enter second integer: "; //prompt user for data
    std::cin >> num4; //read an integer

    sub = num3 - num4; //subtract the numbers; store result in sub 

    std::cout<< "the subtraction of the two numbers are: " << sub << std::endl;
    

    


}
