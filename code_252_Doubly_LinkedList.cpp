
//Insert an element at any position of the linked list

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

//Insert at any position

    int pos = 4;
    

    if(pos == 0)    // for the first element
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else
    {
        Node *cur = head;
        while(--pos)
        {
            cur = cur->next;
        }

        if(cur->next == NULL)   //for the last node (pos = 4)
        {
            Node *temp = new Node(5);
            temp->prev = cur;
            cur->next = temp;
        }
        else                   //In between the linked list
        {
            Node *temp = new Node(5);
            temp->next = cur->next;
            temp->prev = cur;
            cur->next = temp;
            temp->next->prev = temp;
        }
    }
    

//print the linked list
    cout<<"\nInsert an element at last: ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}