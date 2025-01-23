
//Devide array in 2 sub-Array with equal sum.
//Time complexicity = O(n^2)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[8] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = 8;
    
    for(int i=0; i<n-1; i++)
    {
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<=i; j++)
        {
            sum1 += arr[j]; 
        }
        for(int j = i+1; j<n; j++)
        {
            sum2 += arr[j]; 
        }
        if(sum1 == sum2)
        {
            cout<<"The given array is devided in 2 sub-Array with equal sum = "<<sum1;
        }
        else{
            cout<<"The given array is not devided in 2 sub-Array with equal sum = ";
        }
    }
}