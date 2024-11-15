/*
	Cases
	- camelCase
		- camelLongerNameCase
	- snake_Camel_Case
	- PascalCase
		- PascalLongerNameCase
	- Snake_Pascal_Case
	- snake_lower_case
	- SNAKE_SCREAMING_CASE

	1. Naming Convention
		variable - camelCase (-10%)
		constant - SNAKE_SCREAMING_CASE (-10%)
		function - PascalCase (-10%)
	2. Naming should make sense & Use only global abbreviation (-10%)
	3. Code Construction (-2%)
		{
			constant variable
			variable

			code block
		}
	4. Refrain using Global Variable (automatic 0)
*/

// Demo Project
// Sari-Sari Store, User can select from all products they want to buy then total and pay it/kick out of the store
// Topics Covered are Input, Output and Conditionals

#include <iostream>
using namespace std;

// Global variable sample: Global variable to set value as 5
const int MAX_SELECTION = 5;
int maxSelection = 5;
#define MaxSelection 5 

int main()
{
    int choice, payment, total = 0;

    cout << "store ko to!\n"
        << "1. Apple\n"
        << "2. Pineapple\n"
        << "3. Pine\n"
        << ":: ";
    cin >> choice;

    system("cls");

    switch(choice) {
    case 1:
        total = 10;
        cout << "Pay $" << total << '\n';
        break;
    case 2:
        total = 5;
        cout << "Pay $" << total << '\n';
        break;
    case 3:
        total = 4;
        cout << "Pay $" << total << '\n';
        break;
    default:
        cout << "Incorrect Input";
    }

    cout << "Input Payment: ";
    cin >> payment;

    total -= payment;

    if (0 < total)
    {
        cout << "You're Kicked out of the store!\n";
        exit(0);
    } 
    else {
        if (0 > total)
        {
            cout << "You have a change " << total * -1 << "\n";
        }
        else {
            cout << "Payment Complete\n";
        }
    }

    cout << "You can take the item now\n\n\n";

    system("pause");
    return 0;
}

