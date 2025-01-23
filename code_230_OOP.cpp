
//Compile time: Function Overloading

#include<iostream>
using namespace std;

class Area
{
    public:
        int calculateArea(int r)
        {
            return 3.14 * r * r;
        }
        int calculateArea(int l, int b)
        {
            return l*b;
        }
};

int main(){

    Area A;
    cout<<A.calculateArea(4)<<endl;
    cout<<A.calculateArea(4, 6)<<endl;
}