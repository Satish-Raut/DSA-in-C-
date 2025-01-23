
//Inserting the element at a particular index

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

    Node *Head;
    Head = NULL;
    Node *Tail;

    int arr[] = {2, 4, 6, 8, 10};

    //Inserting at the last
    for(int i=0; i<5; i++)
    {
        if(Head == NULL)    // if there is not any linked list 
        {
            Head = new Node(arr[i]);
        }

        else                // if there is at least one node present in the Linked List
        {
            Tail = Head;

            while(Tail->next != NULL)
            {
                Tail = Tail->next;
            }
            Tail->next = new Node(arr[i]);  
        }
    }

    //Inserting the element at a perticular position

    int pos = 3, ele = 20;
    Node *ptr = Head;
    int x = pos-1;

    while(x--)
    {
        ptr = ptr->next;
    }

    Node *t = new Node(ele);
    t->next = ptr->next;
    ptr->next = t; 
     

    Node *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}
