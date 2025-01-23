#include <iostream>
#include <string>
using namespace std;

string remove_duplicate(string &str)
{

    int index = 0;
    for(int i=0; i<str.length(); i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(str[i] == str[j])
            {
                break;
            }
        }
        if (i==j)
        {
            str[index++] = str[i];
        }
    }

    str.resize(index);
    return str;
}

int main() {
    
     
    string str = "GeeksforGeeks "; 
   
    cout << "Original String : " << str << endl; 
    remove_duplicate(str);
    cout << "After removing duplicate String : " << str << endl;  
}