
//Removing Duplicates from Linked List

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

//Removing Duplictes from Linked list:

    Node *prev = head, *cur = head->next;

    while(cur)
    {
        if(prev->data == cur->data)
        {
            prev->next = cur->next;
            delete cur;
            cur = prev->next;
        }
        else{
            cur = cur->next;
            prev = prev->next;
        }

    }

//print the linked list
    cout<<"\nAfter removing Duplicates ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}
