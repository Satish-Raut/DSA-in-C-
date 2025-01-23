
//Permutations with presence of duplicates

#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>& arr, vector<vector<int>>& ans, int index){

    if(index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    vector<bool>use(21, 0);
    for(int i=index; i<arr.size(); i++)
    {
        if(use[10+arr[i]] == 0)
        {
            swap(arr[index], arr[i]);
            permute(arr, ans, index+1);
            swap(arr[index], arr[i]);

            use[10+arr[i]] = 1;
        }
    }
    
}

int main(){

    vector<int>arr = {1, 1, 2};
    vector<vector<int>> ans;

    permute(arr, ans, 0);

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
