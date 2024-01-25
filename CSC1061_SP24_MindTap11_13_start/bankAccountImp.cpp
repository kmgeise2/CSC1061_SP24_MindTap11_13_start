
//Implementation file bankAccountImp.cpp

#include <iostream>
#include <iomanip>
#include "bankAccount.h"

using namespace std;

//Constructor
bankAccount::bankAccount(int acctNumber, double bal)
{
    accountNumber = acctNumber;
    balance = bal;
}
