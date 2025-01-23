
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

    int arr[] = {2, 4, 6, 8};

    //Inserting at the last
    for(int i=0; i<4; i++)
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

    Tail = Tail->next;
    Tail->next = new Node(10);
     

    Node *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}
