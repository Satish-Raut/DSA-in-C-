

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int increament(int &n){
    n++;
}

int add_two(vector<int>&arr)
{
    for(int i=0; i<arr.size(); i++){
        arr[i] += 2;
    }
}

int main(){
    // int num = 10;
    // int temp = num;
    // increament(temp);
    // cout<<temp<<endl;
    // cout<<num<<endl<<endl;

    vector<int>num(5, 0);
    add_two(num);
    for(int i=0; i<num.size(); i++)
    {
        cout<<num[i]<<" ";
    }

}