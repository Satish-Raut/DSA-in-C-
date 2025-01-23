

//Order of Constructor and Destructor

#include<iostream>
using namespace std;

class customer{
    string name;

public:
    customer()
    {
        name = "4";
        cout<<"Constructor: "<<name<<endl;
    }

    customer(string name)
    {
        this->name = name;
        cout<<"Constructor: "<<name<<endl;
    }
    
    ~customer()
    {
        cout<<"Destructor: "<<name<<endl;
    }

};

int main(){

    customer C1("1"), C2("2"), C3("3");
    customer *A1 = new customer;
    delete A1;


}