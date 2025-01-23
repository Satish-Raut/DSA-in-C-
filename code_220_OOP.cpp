

#include<iostream>
using namespace std;

class customer {
    string name;
    int account_no;
    int balance;

public:

    //Inline Constructor
    customer(string a, int b, int c):name(a),account_no(b), balance(c){

    }

    //Copy constructor
    customer(customer &B)
    {
        name = B.name;
        account_no = B.account_no;
        balance = B.balance;
    }

    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

}; 
int main(){

    customer C1("Satish", 4433, 1100);
    customer C2(C1); 
    C1.display();
    C2.display();
}