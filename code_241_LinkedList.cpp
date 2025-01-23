
//Add Node at the last Using "Recursion"

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

int main(){

    Node *head;
    head = new Node(4);

    int arr[] = {2, 4, 6, 8};

    head = CreateLinkedList(arr, 0, 4);

    Node *p = head;

    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }

}