
#include "bank.h"

void menu(int *num)
{
    int select = 0;

    cout << endl<<"Welcome! Select options below:" << endl;

    cout << "\t1. Make new account."

         << "\n\t2. Deposit to an account."

         << "\n\t3. Withdraw from an account."

         << "\n\t4. Transfer money."

         << "\n\t5. Print account."

         << "\n\t6. Activate/Deactivate an account."

         << "\n\t7. Delete an account."

         << "\n\t8. Display all accounts."

         << "\n\t9. Quit."

         << endl;

    cout << "Selection:\t";

    cin >> select;

    *num = select;

}

void makeAccount(vector<Account> &Accounts)

{

    Account temp;

    temp.AccountNumber = rand() % 8999 + 1000;

    cout << "The bank account number is: " << temp.AccountNumber << endl;

    cout << "Enter First Name: " << endl;

    cin >> temp.firstName;

    cout << "Enter Last Name: " << endl;

    cin >> temp.lastName;

    cout << "Enter starting balance :" << endl;

    cin >> temp.accountBalance;

    Accounts.push_back(temp);

}

void printAccount(vector<Account> &Accounts)

{

    vector<Account>::iterator i;

    int accountNumber;

    cout << "What account would you like to view? " << endl;

    cin >> accountNumber;

    bool found= false;

    for (auto& i : Accounts)

    {

        cout << i.AccountNumber << endl;

        if (i.AccountNumber == accountNumber)

        {

            cout << "Account Number: " << accountNumber << endl;

            cout << setw(4);

            cout << "Balance: " << i.accountBalance << endl;

            cout << endl;

            cout << "Last Name: " << i.lastName << endl;

            cout << setw(4);

            cout << "First Name: " << i.firstName << endl

                 << endl;

            found = true;

        }

    }

    if (!found)

    {

        cout << "Invalid number." << endl;

    }

}

void transfer(vector<Account> &Accounts)

{

    int n, a;

    int From, To;

    int transferAmount;


    cout << "Sender Account number: " << endl;

    cin >> From;

    cout << endl

         << "Receiver Account number: " << endl;

    cin >> To;

    cout << "Amount to transfer? :" << endl;

    cin >> transferAmount;

    for (auto& j : Accounts)

    {

        for (auto& i : Accounts)

        {

            if (From == j.AccountNumber)

            {

                n = i.accountBalance;

                i.accountBalance = n - transferAmount;

                cout << "The new balance for account " << From << "is " << i.accountBalance<<endl;

            }

            if (To == i.AccountNumber)

            {

                a = i.accountBalance;

                i.accountBalance = a + transferAmount;

                cout << "The new balance for account " << To << "is " << i.accountBalance<<endl;

            }

        }

    }

}

void PrintAllAccounts(vector<Account> &Accounts)

{

    vector<Account>::iterator i;

    for(auto& i : Accounts)

    {

        cout << "\tAccount Number: " << i.AccountNumber;

        cout << setw(4);

        cout << "\tBalance: " << i.accountBalance;

        cout << endl;

        cout << "\tLast Name: " << i.lastName;

        cout << setw(4);

        cout << "\tFirst Name: " << i.firstName << endl

             << endl;

    }

}

void depositAccount(vector<Account> &Accounts)

{

    int deposAccount, deposAmount;

    cout << "Please enter account number: " << endl;

    cin >> deposAccount;

    cout << "Amount to deposit :" << endl;

    cin >> deposAmount;

    vector<Account>::iterator i;

    for(auto &i : Accounts)

    {

        if (i.AccountNumber == deposAccount)

        {

            i.accountBalance += deposAmount;

            cout << "The new balance for account " << deposAccount << "is " << i.accountBalance<<endl;

            return;

        }

    }

    cout << "Invalid Account Number." << endl;


}

void ActiveDeactive(vector<Account> &Accounts)

{

    int AcctNum;

    cout << "Enter account number to activate or deactivate?" << endl;

    cin >> AcctNum;

    vector<Account>::iterator i;



    for (auto& i : Accounts)

    {

        if (i.AccountNumber == AcctNum)

        {
            int ch;
            cout << "Press 1 to activate, 0 to deactivate:";
            cin >> ch;

            if (ch == 1)
            {
                i.active = true;
            }
            else if (ch == 0)
            {
                i.active = false;
            }

            cout << "This bank account " << AcctNum << " is " << (i.active?"Activated":"Deactivated") << endl;

            return;

        }

    }


}

void withdrawAccount(vector<Account> &Accounts)

{

    int withdrawAccount;

    double withdrawAmount;

    cout << " Please enter account number: " << endl;

    cin >> withdrawAccount;

    cout << "Amount to withdraw? :" << endl;

    cin >> withdrawAmount;

    vector<Account>::iterator i;

    for (auto& i : Accounts)

    {

        if (i.AccountNumber == withdrawAccount)

        {

            if (withdrawAmount <= (i.accountBalance))

            {

                i.accountBalance -= withdrawAmount;

                cout << "The new balance for account " << withdrawAccount << "is " << i.accountBalance << endl;

            }

            else

            {

                cout << "Insufficient Funds" << endl;

            }
            return;

        }

    }
    cout << "Invalid Number." << endl;

}

void sortAccounts(vector<Account> &Accounts)

{

    sort(Accounts.begin(), Accounts.end(), [](Account& i, Account& j) {return (i.AccountNumber < j.AccountNumber); });


}

void deleteAccount(vector<Account> &Accounts)

{

    int del;

    cout << "Enter account number to delete?" << endl;

    cin >> del;

    vector<Account>::iterator i;


    for (i = Accounts.begin(); i != Accounts.end(); i++)

    {

        if ((*i).AccountNumber == del)

        {

            Accounts.erase(i);

            cout << "Account " << del << " was successfully deleted" << endl;

            return;

        }

    }
    cout << "Invalid Number" << endl;

}