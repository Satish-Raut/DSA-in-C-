
//DELETION of Nodes

//delete the node from any position

#include<iostream>
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

    int arr[] = {10, 20, 30, 40}, n=4;

    head = Create_DLL(arr, 0, n, NULL);


//print the linked list
    cout<<"Original Linked List: ";
    Node *t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

//Delete the Node from any position

    Node *cur = head;
    int pos = 3;

    while(--pos)
    {
        cur = cur->next;
    }

    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    delete cur;

    
    

//print the linked list
    cout<<"\nInsert an element at last: ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}