
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
int mat[4][4] = {{1, 2, 3, 4},
                 {5, 6, 7, 8}, 
                 {9, 10, 11, 12},
                 {13, 14, 15, 16}}; 

    
        for(int j=0; j<4; j++) // row
        {
            cout<<mat[0][j]<<" ";
        }
        cout<<"\n";
        for(int j=1; j<4; j++)  //right column
        {
            cout<<mat[j][3]<<" ";
        }
        cout<<"\n";
    
    
    // cout<<mat[1][3]<<" ";

}