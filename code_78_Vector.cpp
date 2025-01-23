#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //Searching element:
    vector<int>v1 = {11, 22, 43,22, 5, 8};
    sort(v1.begin(),v1.end());
    cout<<binary_search(v1.begin(), v1.end(), 5)<<endl; 

    //Find the index of an element:
    cout<<find(v1.begin(), v1.end(), 22)-v1.begin()<<endl;

    auto a = find(v1.begin(), v1.end(), 11);
    cout<<*a<<endl;

    vector<int>v2;
    v2 = v1;

    for(auto i=v2.begin(); i!=v2.end(); i++)
    {
        cout<<*i<<" ";
    }

    // //count:
    // cout<<count(v1.begin(), v1.end(), 22)<<endl;    //number of occurance of an element

    // //lower bound:
    // auto l1 = lower_bound(v1.begin(), v1.end(), 43);

    // cout<<"Lower bound = "<<*l1<<endl;
    // if (l1 != v1.end()) {
    //     cout << "Lower bound of 11: " << *l1 << endl;
    // } else {
    //     cout << "No lower bound found for 11" << endl;
    // }



}