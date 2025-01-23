// Butterfly pattern printing: 

//Enter the value of n = 4
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 

#include<iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"\nEnter the value of n = ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=n-1; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}