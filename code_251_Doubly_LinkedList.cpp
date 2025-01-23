
//Insert an element at last of the linked list

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

//Creating Linked List Using Recursion:

Node *Create_DLL(int arr[], int index, int size, Node *back)
{
    if(index == size)
    {
        return 0;
    }

    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = Create_DLL(arr, index+1, size, temp);

    return temp;

}

int main(){
    
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {10, 20, 30, 40}, n=4;

//creating a Linked List
    // for(int i=0; i<n; i++)
    // {
    //     if(head == NULL)
    //     {
    //         head = new Node(arr[i]);
    //         tail = head;
    //     }
    //     else{
    //         Node *temp = new Node(arr[i]);
    //         tail->next = temp;
    //         temp->prev = tail;
    //         tail = temp;
    //     }
    // }

    head = Create_DLL(arr, 0, n, NULL);


//print the linked list
    cout<<"Original Linked List: ";
    Node *t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

//Insert at last
    //if list does not exist
    if(head == NULL)
    {
        head = new Node(5);
    } 
    else    //if list exist 
    {
        Node *cur = head;
        while(cur->next != NULL)
        {
            cur = cur->next;
        }
        Node *temp = new Node(5);
        cur->next = temp;
        temp->prev = cur;
        
    }


//print the linked list
    cout<<"\nInsert an element at last: ";
    t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    
}