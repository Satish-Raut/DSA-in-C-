
//Rotation array by 90 degree

#include<iostream>
using namespace std;


int main(){
    int matrix[4][4] = {1,  2,  3,  4,
                        5,  6,  7,  8, 
                        9,  10, 11, 12};

    int row = 3, col = 4;
//Method -01:(Making last row as first column, similarlly 2nd last row as 2nd column.)
    cout<<"Array rotated by 90 degree: \n";
    for(int i= 0; i<col; i++)
    {
        for(int j=row-1; j>=0; j--)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl; 
    }

}
