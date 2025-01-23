
//Remove element from a particular index Using "RECURSION":

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
//Deleting the particular index element

Node *deleteNode(Node *cur, int x)
{
    if(x == 1)
    {
        Node *temp = cur->next;
        delete cur;
        return temp;
    }

    cur->next = deleteNode(cur->next, x-1);
    return cur;
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
    
    Head = deleteNode(Head, pos);

    cout<<"\nAfter removing the " <<pos<<" position Node the Linked List: ";
    Node *tem = Head;
    while(tem != NULL)
    {
        cout<<tem->data<<" ";
        tem = tem->next;
    }
}