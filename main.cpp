#include <iostream>
#include "bank.h"
using namespace std;

int main(void)

{

    vector<Account> bankAccounts;

    int input = 0;

    int *inputPtr = &input;

    menu(inputPtr);

    while (input != 9)

    {

        switch (input)

        {

            case 1:

                makeAccount(bankAccounts);

                break;

            case 2:

                depositAccount(bankAccounts);

                break;

            case 3:

                withdrawAccount(bankAccounts);

                break;

            case 4:

                transfer(bankAccounts);

                break;

            case 5:

                printAccount(bankAccounts);

                break;

            case 6:

                ActiveDeactive(bankAccounts);

                break;

            case 7:

                deleteAccount(bankAccounts);

                break;

            case 8:

                PrintAllAccounts(bankAccounts);

                break;

            case 9:

                return 0;

            default:

                cout << "Invalid choice please enter a number between 0 and 9 from the menu above" << endl;

        }

        menu(inputPtr);

    }

    return 0;

}