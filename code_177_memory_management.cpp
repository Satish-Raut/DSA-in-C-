
//Dinamic memory allocation of 3D array

#include<iostream>
using namespace std;

int main(){

    int L = 3, B = 2, H = 3;
    int ***ptr = new int **[L];

    for(int i=0; i<L; i++)
    {
        ptr[i] = new int *[B];
        for(int j = 0; j<B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    for(int i=0; i<L; i++)
    {
        for(int j = 0; j<B; j++)
        {
            for(int k = 0; k<H; k++)
            {
                ptr[i][j][k] = i+j+k;
            }
        }
    }

    cout<<"3D Array: \n";
    for(int i=0; i<L; i++)
    {
        for(int j = 0; j<B; j++)
        {
            for(int k = 0; k<H; k++)
            {
                cout<<ptr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    //release memory
    for(int i = 0; i < L; i++) 
    {
        for(int j = 0; j < B; j++) 
        {
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;



}

