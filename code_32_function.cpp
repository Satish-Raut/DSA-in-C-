#include<iostream>
using namespace std;

bool prime(int n){
    if(n<2)
        return 0;
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int factorial(int x){
    int sum;
    if(x==1){
        return 1; 
    }
    sum =  x * factorial(x-1);
    return sum;
}
int main(){
    int n;
    cout<<"Enter value of n = ";
    cin>>n;
    if(prime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }

    cout<<factorial(n);
}