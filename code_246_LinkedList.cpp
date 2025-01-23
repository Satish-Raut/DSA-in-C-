
//Remove element from a particular index:

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;  
    }
};
//Creating the Linked List

Node* CreateLinkedList(int arr[], int index, int size)
{
    if(index == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index+1, size);

    return temp;
}

int main()
{
    Node *Head;

    int arr[] = {2, 4, 6, 8};
    Head = CreateLinkedList(arr, 0, 4);

    cout<<"Original Linked List: ";
    Node *t = Head;
    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

    int pos = 3;
    int x = pos;
    Node *cur = Head;
    Node *prev = NULL;
    

    if(pos == 1)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }
    else{
        pos--;
        while(pos--)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        delete cur;
    }

    cout<<"\nAfter removing the " <<x<<" position Node the Linked List: ";
    Node *tem = Head;
    while(tem != NULL)
    {
        cout<<tem->data<<" ";
        tem = tem->next;
    }
}