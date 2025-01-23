
//Majority element:
//Boyer-Moore Voting Algorithm:
// The algorithm correctly identifies the candidate for the majority element, but it's always good to double-check if the candidate appears more than n/2 times in the array.

#include<iostream>
using namespace std;

int main(){
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = 11, candidate = -1, vote = 0;

    for(int i=0; i<n; i++)
    {
        if(vote == 0)
        {
            vote = 1;
            candidate = arr[i];
        }
        else
        {
            if(candidate == arr[i])
            {
                vote++;
            }
            else{
                vote--;
            }
        }
    }

    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == candidate)
        {
            count++;
        }
    }

    if(count > n / 2) {
        cout << "Majority Element: " << candidate << endl;
    } else {
        cout << "No Majority Element" << endl;
    }

    return 0;

}
