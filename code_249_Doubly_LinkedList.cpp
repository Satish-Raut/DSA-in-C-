
//Insert an element at startig of the linked list

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

int main(){
    
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {10, 20, 30, 40}, n=4;

    //creating a Linked List
    for(int i=0; i<n; i++)
    {
        if(head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    //print the linked list
    cout<<"Original Linked List: ";
    Node *t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

//Insert at first
    //if list does not exist
    if(head == NULL)
    {
        head = new Node(5);
    } 
    else    //if list exist 
    {
        Node *temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }


//print the linked list
    cout<<"\nInsert an element at starting: ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}