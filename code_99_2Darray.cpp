
//Print sum of diagonal element

#include<iostream>
using namespace std;

int main(){

    int arr[4][4] = {5, 8, 3, 9,
                     6, 2, 8, 4,
                     5, 3, 2, 2,
                     2, 8, 1, 9};
    int row = 4, col = 4, sum1 = 0, sum2=0;
//Method -01(1st diagonal sum):
//Time complexity = O(row^2)   //-->row*col = row^2 <-{row = col}

    // for(int i=0; i<row; i++)
    // {
    //     for(int j=0; j<col; j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             sum1 += arr[i][j];
    //         }
    //     }
    // }

//Method -01(2nd diagonal sum):
//Time complexity = O(row * col)

    // for(int i=0; i<row; i++)
    // {
    //     for(int j=col-1; j>=0; j--)
    //     {    
    //         if(i+j == col-1)
    //         {
    //             sum2 += arr[i][j];
    //         }
    //     }
    // }

//Method -02(1st diagonal sum):
//Time complexity = O(row)

    for(int i=0; i<row; i++)
    {
        sum1 += arr[i][i];
    }
//Method -02(2nd diagonal sum):
//Time complexity = O(row)

    int i=0, j=col-1;
    while(j>=0)
    {
        sum2 += arr[i][j];
        i++, j--;
    }
    cout<<"1st Diagonal sum = "<<sum1<<endl;
    cout<<"2nd Diagonal sum = "<<sum2;
}