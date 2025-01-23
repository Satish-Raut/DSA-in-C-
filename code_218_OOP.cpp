
//Dynamic memory allocation

#include<iostream>
#include<vector>
using namespace std;

class student{
    
    public:
        string name;
        int roll_no;
        string grade;

};

int main(){

    student *s = new student;
    (*s).name = "satish";
    (*s).roll_no = 12;
    (*s).grade = "A+";

    cout<<(*s).name<<endl;
    cout<<s->name<<endl;
    cout<<(*s).roll_no<<endl;
    cout<<s->grade<<endl;

}