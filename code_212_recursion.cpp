
//  (JOSEPHUS PROBLEM)
//Predict the winner

#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>& person, int n, int index, int person_left, int k){

    if(person_left == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(person[i] == 0)
            {
                return i;
            }
        }
    }

    int ele = (k-1) % person_left;

    while(ele-- )
    {
        index = (index+1) % n;
        while(person[index] == 1)
        {
            index = (index+1)%n;    //Skip killed person
        }
    }
    
    person[index] = 1;

    while(person[index] == 1)
    {
        index = (index+1)%n;    //move to next alive person
    }

    return winner(person, n, index, person_left-1, k);
}


int main(){

    int n = 6, k = 4;
    vector<bool>person(n, 0);
    cout<<winner(person, n, 0, n, k);
}
