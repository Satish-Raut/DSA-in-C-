
//Printing Spiral Shape:
//   __________
//    _______  |
//   |  ___  | |
//   | | __| | |
//   | |_____| |
//   |_________|   

#include<iostream>
using namespace std;

int main(){
    int arr[6][6] = {1,  2,  3,  4,  5,  6,
                     7,  8,  9,  10, 11, 12,
                     13, 14, 15, 16, 17, 18,
                     19, 20, 21, 22, 23, 24,
                     25, 26, 27, 28, 29, 30,
                     31, 32, 33, 34, 35, 36};

    int row = 6, col = 6;
    int top = 0, right = col-1, bottom = row-1, left = 0; 
    
    cout<<"Spiral Shape Array: \n";
    while(top<=bottom && left<=right)
    {
        for(int i=left; i<=right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i=top; i<=bottom; i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right; i>=left; i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
        }
        bottom--;

        if(left<=right)
        {
            for(int i=bottom; i>=top; i--)
            {
                cout<<arr[i][left]<<" ";
            }
        }
        left++;
    }

    return 0;
}