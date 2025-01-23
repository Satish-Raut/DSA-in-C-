

#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int index, int n, int sum){

    if(index == n)
    {
        cout<<sum<<endl;
        return;
    }

    print(arr, index+1, n, sum);    //not adding the element
    print(arr, index+1, n, sum + arr[index]);   //adding the element
}

int main(){

    int arr[] = {3, 4, 5};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Subset Sum: \n";
    print(arr, 0, n, sum);
}