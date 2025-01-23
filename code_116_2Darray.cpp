

#include<iostream>
using namespace std;

int main(){
    int N = 3 , count = 0;
    int arr[N][N] = {{0, 0, 0},
                     {0, 0, 1},
                     {0, 1, 1}};

//Method-01:
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         if(arr[i][j] == 0)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;

    for(int i=0; i<N*N; i++){
        if(arr[0][i] == 0)
        {
            count++;
        }
    }
    cout << count;


}