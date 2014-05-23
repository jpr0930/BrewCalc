#include <iostream>
#include "brew_calcs.h"

using namespace brewCalcs;
using std::cout;
using std::cin;
using std::endl;

int main()
{

int choice;

cout << "Welcome to BrewCalcs!" << endl << "Please choose an option from the list below: " << endl;
cout << "[1] FG" << endl;
cout << "[2] ABV" << endl;
cin >> choice;

switch(choice)
{

case 1:
    cout << endl;
    finalGravity();
    break;

case 2:
    cout << endl;
    abv();
    break;
}

abv2();
return 0;
}
