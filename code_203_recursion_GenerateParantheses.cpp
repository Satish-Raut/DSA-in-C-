
//Generate Parantheses:

#include<iostream>
#include<vector>
using namespace std;

void parantheses(int n, int left, int right, string &temp,vector<string>& ans){

    if(left + right == 2*n)
    {
        ans.push_back(temp);
        return;
    }

    //Adding left parantheses
    if(left<n)
    {
        temp.push_back('(');
        parantheses(n, left+1, right, temp, ans);
        temp.pop_back();
    }

    //adding right parantheses
    if(right<left)
    {
        temp.push_back(')');
        parantheses(n, left, right+1, temp, ans);
        temp.pop_back();
    }
}

int main(){

    int n = 3;
    string temp;
    vector<string> ans;

    parantheses(n, 0, 0, temp, ans);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<"{ "<<ans[i]<<" }"<<endl;
    }
    

}