
//STL Vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v;
    
    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
//Insert Elements:

    v.push_back(3);
    v.push_back(1);
    v.push_back(5);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;
//Updating value:
    v[1] = 10;

    cout<<"v = ";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"v1 = ";
    vector<int>v1{3, 4, 5, 6, 7};
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"v2 = ";
    vector<int>v2(4, 3);  //Vectro all same element
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"v3 = ";
    vector<int>v3 = {1, 2, 3, 4, 5};  //Vectro all same element
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

//Delete value form vector:

    v3.pop_back();
    v3.erase(v3.begin()+2);

    cout<<"Size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    cout<<"v3 = ";  //Vectro all same element
    for(int i=0; i<v3.size(); i++)
    {
        cout<<v3[i]<<" ";
        // v3.insert(v3.begin()+1);
    }

//Insert the elements:
    // v3.insert(v3.begin()+1);
    return 0;
}