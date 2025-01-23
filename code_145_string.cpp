
//finding largest prefix suffix
//Brute force approach

#include<iostream>
using namespace std;

int main(){
    string str = "ABCABDABCABCABD";
    int max_len = 0, n = str.size();
    string answer;

    for(int len = 1; len<str.size(); len++)
    {
        bool match = 1;
        string ans = "";
        for(int i = 0; i<len; i++)
        {
            if(str[i] != str[n-len+i])
            {
                match = 0;
                break;
            }
            else{
                ans+=str[i];
            }
        }

        if(match)
        {
            answer = ans;
            max_len = len;
        }
    }

    cout<<answer<<endl;
    cout<<"largest prefix suffix: "<<max_len<<endl;
    
}
