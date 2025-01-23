

#include<iostream>
using namespace std;

class customer{
    string name;
    int *balance;

public:
    customer(string name, int bal)
    {
        this->name = name;
        balance = new int;
        *balance = bal;
    }
    
    void display(){
        cout<<name<<" "<<balance;
    }

    ~customer()
    {
        delete balance;
    }

};

int main(){

    customer C1("Satish", 1200);
    C1.display();

}