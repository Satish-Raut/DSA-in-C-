
//Printing Wave shape:

#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {3, 6, 4, 2,
                     7, 8, 11, 5,
                     9, 3, 2, 1,
                     17, 8, 5, 9};

    int row = 4, col = 4;

    cout<<"Wave Strustured Array: ";
    for(int i=0; i<row; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<col; j++)
            {
                cout<<arr[j][i]<<" ";    //Printing column up -> down
            }
            
        }
        else
        {
            for(int j=col-1; j>=0; j--)
            {
                cout<<arr[j][i]<<" ";        //Printing column down -> up
            }
           
        }
    }
}
