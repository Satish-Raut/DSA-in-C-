

#include<iostream>
#include<vector>
using namespace std;

class student{
        string name;
        int roll_no;
        string grade;

    public:
    //Setter function
        void setname(string s)
        {
            name = s;
        }
        void setroll(int n)
        {
            roll_no = n;
        }
        void setgrade(string m)
        {
            grade = m;
        }
    //getter function
        void getname()
        {   
            cout<<name<<endl;
        }
        void getroll()
        {
            cout<<roll_no<<endl;
        }
        string getgrade()
        {
            return grade;
        } 
};

int main(){
    student s1;
    s1.setname("Satish");
    s1.setroll(36);
    s1.setgrade("A");

    s1.getname();
    s1.getroll();
    cout<<s1.getgrade();


}