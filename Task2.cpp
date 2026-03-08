#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:

    // Default Constructor
    BankAccount()
    {
        accountHolderName = "Unknown";
        accountNumber = 0;
        balance = 0;
    }

    // Setter for name
    bool setName(string name) { 
        if(name.empty())
        {
            cout<<"Name can not be empty:";
            return false;
        }
        accountHolderName = name;
        return true;
     }
     // Setter for account number
    bool setAccountNumber(int accNum) { 
  if(accNum >= 10000 && accNum <= 99999){
     accountNumber = accNum; 
     return true;
  }       
        cout << "Invalid Account Number. Must be 5 digits. Try again.\n";
        return false;
    }
    //setter for balance
   bool setBalance(double bal) {
    if(bal>=0)
        {
             balance = bal; 
             return true;
        }
        cout << "Invalid Balance. Cannot be negative. Try again.\n";
             return false;
    }
    // Display Function
    void displayAccountInfo()
    {
        cout << "\nAccount Information\n";
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc1;
    string name;
    int accNum;
    double bal;

    // Input Name 
    while(true)
    {
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        if(acc1.setName(name))
            break;
        }

    // Input Account Number with 
    while(true)
    {
        cout << "Enter Account Number (5 digits): ";
        cin >> accNum;

           if( acc1.setAccountNumber(accNum))
            break;
    }

    // Input Balance 
    while(true)
    {
        cout << "Enter Balance: ";
        cin >> bal;

        if(acc1.setBalance(bal))
       break;
        }

    // Display Account Info
    acc1.displayAccountInfo();
    return 0;
}