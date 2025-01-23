#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v3 = {1, 2, 3, 4, 5}; 
    v3.pop_back();
    v3.erase(v3.begin()+2);

    cout<<"Size = "<<v3.size()<<endl;
    cout<<"Capacity = "<<v3.capacity()<<endl;

    cout<<"v3 = ";  //Vectro all same element
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    v3.insert(v3.begin()+2, 25);

    cout<<"v3 = ";  //Vectro all same element
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    cout<<"\nAfter Removing all the elements: \n";
    v3.clear();
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }

    cout<<"Size = "<<v3.size()<<endl;
    cout<<"Capacity = "<<v3.capacity()<<endl;

}