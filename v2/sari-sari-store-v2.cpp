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
// Sari-Sari Store, User can select from all products they want to buy then
// total and pay it Topics V1 topics and looping

#include <iostream>
using namespace std;

int main() {
  // added computed bill to maintain the total bill if user payment is not enough
  int choice, payment, totalBill = 0, computedBill = 0;

  // applied loop here as it is here that the accepting and calculation of the products happen
  // choose do while for the user requires to pick product first before looping back
  do {
    cout << "store ko to!\n"
         << "1. Apple\n"
         << "2. Pineapple\n"
         << "3. Pine\n"
         << "0. Bill Out\n"
         << ":: ";
    cin >> choice;

    // this is responsible for adding the proper values to the total bill
    switch (choice) {
    case 1:
      totalBill += 10;
      break;
    case 2:
      totalBill += 5;
      break;
    case 3:
      totalBill += 4;
      break;
    // this is the case where it will end the ordering of the user
    case 0:
      system("cls");
      cout << "Computing bill...\n\n";
      system("pause");
      system("cls");
      break;
    // if any case user go rouge this is the catcher
    default:
      system("cls");
      cout << "Incorrect Input";
      system("pause");
      system("cls");
    }

    // this will a condition that checks if the input choice is within the range of 0 - 3 as this are the only choices given
    // if true then show the current bill
    if(0 < choice && 3 >= choice) {
      system("cls");
      cout << "Current Bill: " << totalBill << "\n";
    }
  } while (choice != 0);

  do {
    // informing how much to pay
    cout << "Your bill is " << totalBill << "\n"
         << "Input Payment: ";
    cin >> payment;

    // computation where it maintains the total bill incase user go rogue
    computedBill = totalBill - payment;

    // check if the user has a remaining balance 
    if (0 > computedBill) {
      cout << "You have a change " << computedBill * -1 << "\n";
    // check if user payed exact amount 
    } else if (0 == computedBill) {
      cout << "Payment Complete\n";
    // if the payment is not enough it will inform the user
    } else {
      system("cls");
      cout << "Insufficient pay! PAY UP!!!\n\n";
      system("pause");
      system("cls");
    }
  // condition for the loop where it states that there must be no remaining balance to the bill by indicating that if it has greater than 1 value it means the payment is not sufficient
  } while (0 < computedBill);

  cout << "You can take the item now\n\n\n";

  system("pause");
  return 0;
}

