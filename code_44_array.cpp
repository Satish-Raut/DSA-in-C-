#include<iostream>
using namespace std;

int main(){
    int arr[6]={1, 2, 3, 5, 6};
    int total=0, sum=0;

    total = 6 * (6+1)/2;
    // for(int i=1; i<=6; i++){
    //     total += i;
    // }
    for(int i=0; i<6; i++){
        sum += arr[i];
    }
    cout<<"Missing element = "<<total - sum;
}