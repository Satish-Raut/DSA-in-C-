
//Add strings:

#include<iostream>
#include<algorithm>
using namespace std;
string add(string num1, string num2)
{
    string ans;
    int index1 = num1.size()-1, index2 = num2.size()-1, sum, carry=0;

    while(index2>=0)
    {
        sum = num1[index1]-'0' + num2[index2]-'0' + carry;
        carry = sum/10;
        char c = '0'+ sum % 10;
        ans += c;
        index2--;
        index1--;
    }

    while(index1>=0)
    {
        sum = num1[index1]-'0' + carry;
        carry = sum/10;
        char c = '0'+ sum % 10;
        ans += c;
        index1--;
    }

    if(carry)
    {
        ans += '0' + carry;
    }
    reverse(ans.begin(), ans.end());
    cout<<"Sum = "<<ans;
}

int main(){
    string num1 = "99845", num2 = "938";

    if(num1.size()>num2.size())
    {
        add(num1, num2);
    }
    else{
        add(num2, num1);
    }
    

}