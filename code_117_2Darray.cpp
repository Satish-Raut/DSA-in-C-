

#include<iostream>
using namespace std;

int main(){
    int N = 4 , M = 4;
    int arr[N][M] = {{0, 0, 1, 1},
                     {0, 0, 0, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};

    int Index = -1;
        int j = M - 1; // Start from the top-right corner

        for (int i = 0; i < N; i++) {
            while (j >= 0 && arr[i][j] == 1) {
                j--; // Move left while there are 1s
                Index = i; // Update the row index with max 1s
            }
        }
        
    cout<<Index<<endl;
    cout<<j;
}