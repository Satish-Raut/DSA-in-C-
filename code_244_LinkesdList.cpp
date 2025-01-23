
//Delete first NODE

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

        Node(int a)
        {
            data = a;
            next = NULL;
        }

};

Node *CreateLinkedList(int arr[], int index, int size)
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

    Node *Head;
    Head = NULL;

    int arr[] = {2, 4, 6, 8};

    Head = CreateLinkedList(arr, 0, 4);

    cout<<"Original LinkedList: ";
    Node *temp = Head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

//Deleate a node at start
    if(Head != NULL)
    {
        Node *t = Head;
        Head = Head->next;
        delete t;
    }

    cout<<"\nAfter removing first element the LinkedList: ";
    Node *tem = Head;

    while (tem != NULL)
    {
        cout<<tem->data<<" ";
        tem = tem->next;
    }
    

}