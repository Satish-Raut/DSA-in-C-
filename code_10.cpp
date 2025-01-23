#include<iostream>
using namespace std;

int main(){
// Table print ->

    // int n;
    // cout<<"Enter the value of n = ";
    // cin>>n;

    // for(int i=1; i<=10; i++){
    //     cout<<n<<" * "<<i<< " = "<< n*i << endl;
    // }

// Power print ->

    // int n, pow;
    // cout<< "Enter the value of n = ";
    // cin>>n;
    // cout<< "Enter the value of pow = ";
    // cin>>pow;

    // int m = 1;
    // for(int i = pow; i>=1; i--){
    //     m = m * n;
    // }

    // cout<<"Answer = "<<m;

// Sum of square of n natural number ->

    int n, pow;
    cout<< "Enter the value of n = ";
    cin>> n;
    int sum = 0, m = 1;

    for(int i = 1; i<=n; i++){
        m = i*i;
        sum += m;
    }

    cout<<"Answer = "<<sum;

}