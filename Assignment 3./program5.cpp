#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    float balance;

    static int totalAccounts;

public:

    BankAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    friend void display(BankAccount b);

    static void displayTotalAccounts()
    {
        cout << "Total Accounts = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void display(BankAccount b)
{
    cout << "Account Number: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
    cout << endl;
}

int main()
{
    BankAccount b1(010020, 25000);
    BankAccount b2(010030, 50000);
    BankAccount b3(010040, 60000);

    cout << "Account Details:" << endl;

    display(b1);
    display(b2);
    display(b3);

    BankAccount::displayTotalAccounts();

    return 0;
} 
