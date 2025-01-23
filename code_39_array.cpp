#include<iostream>
using namespace std;

int main(){

    int arr[] = {2, 8, 14, 3, 9};
    int max = INT32_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    } 
    cout<<"Max = "<<max<<endl;

    int min = INT32_MAX;

    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    } 
    cout<<"Min = "<<min<<endl;
}