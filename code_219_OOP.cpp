

#include<iostream>
using namespace std;

class customer {
    string name;
    int account_no;
    int balance;

public:
    // Default constructor
    customer() {
        name = "Satish";
        account_no = 123;
        balance = 1000;
    }

    // Parameterized Constructor
    // customer(string a, int b, int c) {
    //     name = a;
    //     account_no = b;
    //     balance = c;
    // }

    customer(string name, int account_no, int balance) {
        this->name = name;  
        this->account_no = account_no;
        this->balance = balance;
    }

    // Another Parameterized Constructor
    // Constructor overloading
    customer(string a, int b) {
        name = a;
        account_no = b;
        balance = 0;
    }

    void display() {
        cout << name << " " << account_no << " " << balance << endl;
    }
};

int main() {
    customer C1;
    customer C2("Alok", 345, 5000);
    customer C3("Rohit", 103);
    C1.display();
    C2.display();
    C3.display();
}
