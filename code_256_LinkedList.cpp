
//Approach-01

//Removing Duplicates from Linked List
//In this approach the space complexity will be increases

#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

//Creating Linked List Using Recursion:

Node *Create_DLL(int arr[], int index, int size, Node *back)
{
    if(index == size)
    {
        return 0;
    }

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = Create_DLL(arr, index+1, size, temp);

    return temp;

}

int main(){
    
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {2, 2, 3, 3, 4, 4}, n=6;

    head = Create_DLL(arr, 0, n, NULL);


//print the linked list
    cout<<"Original Linked List: ";
    Node *t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

//Removing Duplicates from the List

    vector<int>ans;
    ans.push_back(head->data);

//inserting list element in a vector
    Node *cur = head->next;
    while(cur)
    {
        if(ans[ans.size()-1] != cur->data)
        {
            ans.push_back(cur->data);
        }
        cur = cur->next;
    }

//inserting the values in List
    cur = head;
    int index = 0;
    
    while(index < ans.size())
    {
        cur->data = ans[index];
        index++;
        cur = cur->next;
    }
    
    int size = ans.size()-1;
    cur = head;
    while(size--)
    {
        cur = cur->next;
    }
    cur->next = NULL;

//print the linked list
    cout<<"\nAfter removing Duplicates ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}
