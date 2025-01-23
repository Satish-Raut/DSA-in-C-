
// static data member

#include<iostream>
using namespace std;

class customer{
    string name;
    int account_no, balance;
    static int total_customer;
    static int total_balance;

public:
    
    customer(string a, int b, int c)
    {
        name = a;
        account_no = b;
        balance = c;
        total_customer++;
        total_balance += c;
    }

    void diposit(int amount)
    {
        balance += amount;
        total_balance += balance;
    }
    void withdraw(int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance -= amount;
            total_balance -= balance;
        }
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<", Total coustomer: "<<total_customer<<endl;
    }
//Static function created:
    static void accessStatic()
    {
        cout<<"Total customer: "<<total_customer<<endl;
        cout<<"Total Balance: "<<total_balance<<endl;
    }
};

//Static member data initialized:
int customer::total_customer = 0;
int customer::total_balance = 0;

int main(){

    customer C1("Satish", 123, 1000);
    customer C2("Rakesh", 234, 1000);
    customer C3("Alok", 345, 2000);

    customer C4("Ashutosh", 134, 3000);
    C1.diposit(400);

    //customer::total_customer;   //Without using static member function we can not access static member data
    customer::accessStatic();  

    C2.withdraw(500);
    customer::accessStatic();    


}