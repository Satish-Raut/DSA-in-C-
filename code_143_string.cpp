
//Dinctict characters of a string

#include <iostream>
#include<vector>
using namespace std;

int main() {
    string str = "AABBBCBBAC";
    // bool visited[256] = {0};
    vector<bool>visited(256, 0);
    int count = 0;


    cout << "Distinct characters: ";
    
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (visited[ch] == 0) {
            cout << ch << " ";
            count++;
        }
        visited[ch] = 1;
    }

    cout<<"\n"<<count<< endl;
    string ans ="";
    for(int i=0; i<=str.size()-3; i++)
    {
        for (int j = i; j < count+i; j++)
        {
            cout<<str[j];
        }    
        cout<<"\n";
    }
    return 0;
}

