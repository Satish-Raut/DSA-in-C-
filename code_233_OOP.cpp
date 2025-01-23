
//Exceptio Handling:

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

    public:

        Customer(string name, int balance, int account_number)
        {
            this->name = name;
            this->balance = balance;
            this->account_number = account_number;
        }

        //Diposite
        void deposit(int amount)
        {
            if(amount > 0)
            {
                balance += amount;
                cout<<amount<<"/- is Credited successfully.\n";
            }
        }
        //Withdraw
        void withdraw(int amount)
        {
            if(amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout<<amount<<"/- is Debited successfully.\n";
            }
            else if(amount == 0)
            {
                throw "Balance in Your account is 0/-\n";
            }
            else{
                throw "Insufficient Balance.\n";
            }
        }
};

int main(){

    Customer C1("Satish", 5000, 345);

    try{
    C1.deposit(100);
    C1.withdraw(6000);
    }
    catch(const char *e)
    {
        cout<<"Exception Occured: "<<e; 
    }

}