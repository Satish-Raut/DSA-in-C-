
//Print row index with maximum sum

#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {4, 3, 0,
                     1, 9, 2,
                     6, 2, 5,
                     3, 1, 2};
    int row = 4, col = 3, max = 0, index;

    for(int i=0; i<row; i++)
    {   
        int sum = 0;
        for(int j=0; j<col; j++)
        {
            sum += arr[i][j]; 
            if(sum>max)
            {
                max = sum;
                index = i;
            }
        }
    }
    cout<<"Mximum sum "<<max<<" is present at row index = "<<index;
}
