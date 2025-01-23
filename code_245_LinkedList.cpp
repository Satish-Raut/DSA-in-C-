
//Delete the Last Node:

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
//Create Linked List

Node *CreateLinkedList(int arr[],int size)
{
    Node *h = NULL;
    Node *t = NULL;

    for(int i=0; i<size; i++)
    {
        if(h == NULL)
        {
            h = new Node(arr[i]);
            t = h;
        }
        else{
            t->next = new Node(arr[i]);
            t = t->next;
        }
    }

    return h;
}

int main(){

    Node *head;
    int arr[] = {2, 4, 6, 8};

    head = CreateLinkedList(arr, 4);

    cout<<"Original Linked List: ";
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    //Deletiing the last Node:

    if(head != NULL)
    {
        if(head->next == NULL)
        {
            Node *tem = head;
            head = NULL;
            delete temp;
        }
        else{
            Node *cur = head;
            Node *prev = NULL;

            while(cur->next != NULL)
            {
                prev = cur;
                cur = cur->next;
            }
            delete cur;
            prev->next = NULL;
        }
    }

    cout<<"\nAfter Removing the last Node: ";
    Node *t = head;

    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }


}