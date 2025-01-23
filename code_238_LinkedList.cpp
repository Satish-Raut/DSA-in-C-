
//Creating a Linked List <or> Inserting an element at the start

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

int main(){

    Node *head;
    head = NULL;

    int arr[] = {2, 4, 6, 8};

    for(int i=0; i<4; i++)
    {

        if(head == NULL)
        {
            head = new Node(arr[i]);
        }

        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    //Traversing Through the whole Linked List

    Node *t = head;

    cout<<"\nElements inside the Linked List: ";
    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
}