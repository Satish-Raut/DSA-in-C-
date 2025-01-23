
//Multi-level Inheritance

#include<iostream>
using namespace std;

class person
{
    protected:
        string name;

    public:
    void introduce(){
        cout<<"Hello, my name is: "<<name<<endl;
    }
};

class employee: public person
{
    protected:
        int salary;

    public:
    void payment(){
        cout<<"My monthly salary is: "<<salary;
    }
};

class manager: public employee
{
    protected:
        string department;
    public:
        manager(string name, int salary, string department)
        {
            this->name = name;
            this->salary = salary;
            this->department = department;
        }

        void display()
        {
            cout<<name<<" "<< salary<<" "<<department<<" \n";
        }
};

int main(){

    manager A("Satish", 2500, "Finance");
    A.display();
    A.introduce();
    A.payment();
}