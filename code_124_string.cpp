


#include<iostream>
#include<string>
using namespace std;

int main(){

//-->
    // char s[] = {'a', 'p', 'p', 'l', 'e','\0'};
    // cout<<s<<endl;
    // char n1[] = "satish";
    // cout<<n1<<endl;

//-->
    // char s1[10];
    // cin>>s1;
    // cout<<s1;

//-->
    // string s = "satish";
    // cout << s << endl; // Outputs: Satish
    // cout << sizeof(s) << endl; // Outputs the size of the std::string object, typically 24 bytes
    // cout << sizeof(s[0]) << endl; // Outputs the size of a single char, typically 1 byte
    // cout << s.size() << endl;

//-->

    // string s1 = "satish raut";
    // cout<<s1<<endl;
    // string s2;

    // cout<<"Enter the string = ";
    // // cin>>s2;  //after space it stop
    // getline(cin, s2);
    // cout<<s2<<endl;

    // cout<<s2.size();

//-->Combine:

    string n1 = "satish";
    string n2 = "raut";

    cout<<n1+" "+n2<<endl;

    //Adding character at last
    n1.push_back('M');
    cout<<n1<<endl;

    //Removing element from the last index:
    n2.pop_back();
    cout<<n2<<endl;






}