
//Binary search in 2D-Array :-

#include<iostream>
using namespace std;

int main(){
    int arr[4][5] = {2, 6, 10, 14, 18,
                   20, 24, 27, 29, 38,
                   47, 52, 78, 93, 102,
                   108, 111, 200, 218, 320};

    int n = 4, m = 5, x=200;

    for(int i=0; i<n; i++)
    {
        if(arr[i][0]<=x && x<=arr[i][m-1])
        {
            int start = 0, end = m-1;
            while(start<=end)
            {
                int mid = (start+end)/2;
                if(arr[i][mid] == x)
                {
                    cout<<i<<", "<<end;
                    break;
                }
                else if(arr[i][mid] > x)
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            } 
            if(start>end)
            {
                cout<<"Not found";
            }
        }
    }
}

