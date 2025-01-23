#include<iostream>
using namespace std;

// int main(){
//     char c;
//     cout<<"Enter a character: ";
//     cin>>c;
//     cout<<"The ASCII value of "<<c<<" is = "<<int(c);

//     return 0;
// }

int main(){
    int a, b, temp;
    cout<<"Enter num1 = ";
    cin>>a;

    cout<<"Enter num2 = ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"num1 = "<<a<<endl;
    cout<<"num2 = "<<b<<endl;

    cout<<"Size = "<< sizeof(a);
}