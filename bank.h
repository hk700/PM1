
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

#ifndef UNTITLED5_BANK_H
#define UNTITLED5_BANK_H

typedef struct _tagAccount
{

    int AccountNumber;
    string lastName;
    string firstName;
    double accountBalance;
    bool active;

}Account;

#endif

//
// Created by Chris on 3/28/2018.
//
void menu(int *num);

void makeAccount(vector<Account> &Accounts);

void printAccount(vector<Account> &Accounts);

void transfer(vector<Account> &Accounts);

void PrintAllAccounts(vector<Account> &Accounts);

void depositAccount(vector<Account> &Accounts);

void ActiveDeactive(vector<Account> &Accounts);

void withdrawAccount(vector<Account> &Accounts);

void sortAccounts(vector<Account> &Accounts); // sort the accounts using the account numbers

void deleteAccount(vector<Account> &Accounts);