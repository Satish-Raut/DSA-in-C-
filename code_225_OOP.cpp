
//Inheritance

#include<iostream>
using namespace std;

class Human
{
    protected:
        string name;
        int age, weight;

};

class Student:public Human
{
    private:
        int roll_no, fees;

    public:
        void fun(string a, int b, int c)
        {
            name = a;
            age = b;
            weight = c;
        }

        void display()
        {
            cout<<name<<" "<<age<<" "<<weight<<"\n";
        }
    
};
    
int main(){

    Student A;
    // A.name = "Satish";
    A.fun("Rahul", 14, 45);
    A.display();
}