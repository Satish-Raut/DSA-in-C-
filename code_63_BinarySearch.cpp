
// (Q.3)  sqrt(x)

#include<iostream>
using namespace std;

int main(){

    int x = 1, ans, start = 0, end = x, mid;

    if(x < 2){
        cout<<"Square root of "<<x<<" is "<<x;
    }

    while (start<=end)
    {
        mid = start+(end-start)/2;

        if(mid == x/mid){     //  (mid * mid == x) -> integer overflow case. So we can use -> (mid == x/ mid)
            ans = mid;
            break;
        }
        else if(mid < x/mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(mid > x/mid){
            end = mid - 1;
        }
    }

    cout<<"Square root of "<<x<<" is "<<mid;
    

}