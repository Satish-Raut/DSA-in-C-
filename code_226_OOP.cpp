
//Inheritance

#include<iostream>
using namespace std;

class Human
{
    protected:
        string name;
        int age, weight;

    public:
        Human(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

};

class Student:public Human
{
    private:
        int roll_no, fees;

    public:
        Student(string name, int age, int b, int c):Human(name, age)
        {
            roll_no = b;
            fees = c;
        }

        void display()
        {
            cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<"\n";
        }
    
};
    
int main(){

    Student A("Rahul", 14, 45, 2000);
    A.display();
}

