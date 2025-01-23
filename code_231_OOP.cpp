
//Complile time: Operator Overloading

#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    // The Complex class currently has only one constructor, which requires two arguments (real and img). However, in the operator+ function, you attempt to create a Complex object ans without providing any arguments, which would require a default constructor. Since no such constructor is defined, the compiler will generate an error.
        Complex(){

        }

        Complex(int real, int img)
        {
            this->real = real;
            this->img = img;
        }

        void display()
        {
            cout<<real<<" + i"<<img<<endl;
        }

        Complex operator -(Complex &C)  
        {
            Complex ans;
            ans.real = real - C.real;
            ans.img = img- C.img;

            return ans; 
        }

};

int main(){

    Complex C1(3, 4);
    C1.display();
    Complex C2(5, 3);
    C2.display();

    //Addition of 2 complex number
    Complex C3 = C1 - C2;   //it is like: C1.fun(C2)
    C3.display();           //            C1 +(C2)
}