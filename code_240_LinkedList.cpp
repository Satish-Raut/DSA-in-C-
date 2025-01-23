
//More Efficient than the previous code
//Inserting the element at the END

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
    Tail = NULL;

    int arr[] = {2, 4, 6, 8};

    //Inserting at the last
    for(int i=0; i<4; i++)
    {
        if(Head == NULL)    // if there is not any linked list 
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }

        else
        {
            Tail->next = new Node(arr[i]);  // if there is at least one node present in the Linked List
            Tail = Tail->next;
        }
    }


    (*Tail).next = new Node(10);    //Insert at the last
     

    Node *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}
