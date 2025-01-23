
// static data member

#include<iostream>
using namespace std;

class customer{
    string name;
    int account_no, balance;
    static int total_customer;

public:
    
    customer(string a, int b, int c)
    {
        name = a;
        account_no = b;
        balance = c;
        total_customer++;
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<", Total coustomer: "<<total_customer<<endl;
    }

    void total()
    {
        cout<<"The Total customer: "<<total_customer<<endl;
    }
};

int customer::total_customer = 0;

int main(){

    customer C1("Satish", 123, 1000);
    customer C2("Rakesh", 234, 1500);
    customer C3("Alok", 345, 2000);
    // C3.total();

    customer C4("Ashutosh", 134, 2050);
    C1.total();    


}