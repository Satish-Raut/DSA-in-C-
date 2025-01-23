
//sum of n natural number

// #include<iostream>
// using namespace std;

// int sum(int n){

//     if(n==1)
//     {
//         return 1;
//     }
//     return n+sum(n-1);
// }

// int main(){

//     int n = 6;
//     cout<<sum(n);

// }


    //Power of 2

#include<iostream>
using namespace std;

int pow(int base, int n){

    if(n == 0)
    {
        return 1;
    }
    return 2*pow(2, n-1);  
}

int main(){

    int n = 5;
    cout<<pow(2, n);

}

