
//Multiple inheritance

#include<iostream>
using namespace std;

class Youtuber
{
    protected:
        int subscriber;

    public:
    void content(){
        cout<<"Hello, I have "<<subscriber<<" subscriber."<<endl;
    }
};

class engineer
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
        string name;
    public:
        codeTeacher(string name, string specialization, int subscriber)
        {
            this->name = name;
            this->specialization = specialization;
            this->subscriber = subscriber;
        }

        void display()
        {
            cout<<name<<" "<< specialization<<" "<<subscriber<<" \n";
        }
};

int main(){

    codeTeacher A("Satish", "Computer Science",2500);
    A.display();
    A.mode();
    A.content();
}