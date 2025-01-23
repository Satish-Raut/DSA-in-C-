
//Compile time: Virtual Function

#include<iostream>
#include<vector>
using namespace std;

class Animal
{
    public:
        virtual void speak() = 0; //Pure virtual Class / Abstract class 
        // {
        //     cout<<"Hu Hu\n";
        // }
};
class Dog: public Animal
{
    public:
        void speak()
        {
            cout<<"Bark\n";
        }
};
class Cat: public Animal
{
    public:
        void speak()
        {
            cout<<"Meow\n";
        }
};

int main(){

    Animal *p;
    p = new Dog();
    (*p).speak();

    p = new Cat();
    (*p).speak();

    // Animal *p;
    // vector<Animal*>animals;     //Store the addresses
    // animals.push_back(new Dog());
    // animals.push_back(new Cat());
    // animals.push_back(new Animal());

    // for(int i=0; i<animals.size(); i++)
    // {
    //     p = animals[i];
    //     p->speak();
    // }

}
