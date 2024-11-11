//Random C++ Program idk what to make yet make some print statements declare some variables etc.

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
 
 int main()     {
 
 int yearpop;
 int death;
 int birth;
 int years;
 int totalpop;
 
 
 cout << "please type a yearly population: " << endl;
 cin >> yearpop;
 
 cout << "please type a death rate: " << endl;
 cin >> death;
 
 cout << "please type a birth rate: " << endl;
 cin >> birth;
 
 cout << "please enter how many years you'd like: " << endl;
 cin >> years;
 
 
 
 totalpop = years * ( yearpop + birth - death);
 
 
 cout << "The yearly annual population is: " << yearpop << endl;

 cout << "The yearly death rate is: " << death << endl;
 
 cout << "You picked: " << years << "years to pass" << endl;

 cout << "The total population is: " << totalpop << " including the death rate, birth rate, * by the number of years you passed" << endl;
 
 return 0;
 
 }
