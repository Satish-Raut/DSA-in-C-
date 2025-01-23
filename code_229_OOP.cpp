
//Multipath inheritance

#include<iostream>
using namespace std;

class Human
{
    public:
        string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    } 
};

class Youtuber: public virtual Human
{
    protected:
        int subscriber;

    public:
    void content(){
        cout<<"Hello, I have "<<subscriber<<" subscriber."<<endl;
    }
};

class engineer: public virtual Human
{
    protected:
        string specialization;

    public:
    void mode(){
        cout<<"My specialization is "<<specialization<<"\n";
    }
};

class codeTeacher: public Youtuber, public engineer
{
    protected:
        string salary;
    public:
        codeTeacher(string name, string specialization, int subscriber, int salary )
        {
            this->name = name;
            this->specialization = specialization;
            this->subscriber = subscriber;
        }

        // void display()
        // {
        //     cout<<name<<" "<< specialization<<" "<<subscriber<<" \n";
        // }
};

int main(){

    codeTeacher A("Satish", "CSE", 2500, 10000);
    A.display();
   
}