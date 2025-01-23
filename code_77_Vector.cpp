#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for sort
using namespace std;

int main(){
    vector<int>v = {8, 3, 7, 1, 2};
    cout<<"Vector = ";
    for(int i=0; i<5; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    cout<<v[0]<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    
    // Sort the array in increasing order:
    sort(v.begin(), v.end());

    cout<<"Sorted vector in ascending order= ";
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";

    // Sort the array in decreasing order:

    // sort(v.begin(), v.end(), greater<int>());    //Method- 01
    sort(v.rbegin(), v.rend());                     //Method- 02

    cout<<"Sorted vector in descending order= ";
    for(auto j=v.begin(); j!=v.end(); j++)
    {
        cout<<*j<<" ";
    }

    cout<<endl;

    //Searching element:
    vector<int>v1 = {11, 22, 43, 5, 8};
    sort(v1.begin(), v1.end());
    cout<<binary_search(v1.begin(), v1.end(), 5)<<endl; 

}
