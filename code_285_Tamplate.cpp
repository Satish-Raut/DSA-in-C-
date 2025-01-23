
#include<iostream>
using namespace std;

template<class T1, class T2>
void Multiply(T1 a, T2 b)
{
    cout<<a*b<<endl;
}

template<class T1>
T1 square(T1 a)
{
    return a*a;
}

int main()
{
    int m = 2, n = 9;
    Multiply<int, int>(m, n);
    cout<<"Square of "<<m<<" is: "<<square(m);

}