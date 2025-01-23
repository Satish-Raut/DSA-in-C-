
//Subsequence:

#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>>& ans, vector<int>& temp){

    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

     // Not including the current element
    subsequence(arr, index+1, n, ans, temp);

    // Including the current element
    temp.push_back(arr[index]);
    subsequence(arr, index+1, n, ans, temp);

    // Backtrack to remove the current element for the next iteration
    temp.pop_back();

}

int main(){

    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<vector<int>>ans;
    vector<int>temp;
    subsequence(arr, 0, n, ans, temp);

    // Output all subsequences using for loop
    for (int i = 0; i < ans.size(); ++i) {
        cout << "{ ";
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << "}" << endl;
    }
}
