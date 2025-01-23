

#include<iostream>
using namespace std;

int main()
{
    int key, index;
    int n;

    cout<<"Enter the size of hash table: ";
    cin>>n;

    int hashtable[n];

    for(int i=0; i<n; i++)
    {
        hashtable[i] = -1;
    }

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the key: ";
        cin>>key;

        index = key % n;

        if(hashtable[index] == -1)
        {
            hashtable[index] = key;
        }
        
        else{
            while(hashtable[index] != -1)   //Quadratic probic
            {
                int idx=1;
                index = index + idx*idx;
                idx++;
                
                if(index == 10)
                {
                    index = 0;
                }
            }

            hashtable[index] = key;
        }
    }

    cout<<"Values of hash table: ";
    for(int i=0; i<n; i++)
    {
        cout<<hashtable[i]<<" ";
    }

    
}