
#include<iostream>
using namespace std;

template<class T>
void display(T x) 
{
	cout<<"Template display:"<<x<<"\n";
}

template<class T1,class T2,class T3>
void display(T1 x,T2 y,T3 z) 
{
	cout<<"Template display:"<<x<<" "<<y<<" "<<z<<"\n";
}

void display(int x)
{
	cout<<"Explicit display:"<<x<<"\n";
}

int main()
{
    int a = 3, b=4 , c= 5;
    display(a);
    display<int>(a);
    display(a, b, c);
    display<int, int, int>(a, b, c);

}