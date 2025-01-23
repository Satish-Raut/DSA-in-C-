

//Book Allocation Question:-
// -> You have n books, each with arr[i] number of pages. m students need to be allocated contiguous books, with each student getting at least one book.
// -> Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.

// -> Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).


#include<iostream>
using namespace std;

int main(){
    int arr[4] = {12, 34, 67, 90};
    int n=4, m=2;

    if(m>n)
    {
        cout<<-1;
    }
    int start = 0, end = 0, mid, ans;

    for(int i=0; i<n; i++)
    {
        start = max(start,arr[i]);  //maximum element is assigned to the start variable
        end += arr[i]; 
    }

    while(start<=end)
    {
        mid = (start+end)/2;
        int page = 0, student = 1;

        for(int i=0; i<n; i++)
        {
            page += arr[i];
            if(page>mid)
            {
                student++;
                page += arr[i];
            }
        }

        if(student <= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout<<"Student get Minimum Pages = "<<ans;

}