

#include<iostream>
using namespace std;



int main(){
    int a, b, ans;
    cin>>a>>b;
    
    try{
        if(b==0)
        {
            cout<<"Devided by 0 is not possible.";  
        }
        
        int ans = a/b;
        cout<<ans<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception Occured: "<<e;
    }

    
}