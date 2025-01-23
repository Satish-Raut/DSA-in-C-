
//Sort the list which contains 0, 1, 2


#include<iostream>
#include<vector>
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

//print the linked list
void print(Node *head){
    
    Node *t = head;
    while(t)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

}

int main(){
    
    Node *head = NULL;

    int arr1[] = {0, 1, 0, 2, 2, 0, 1}, n=7;

    head = Create_DLL(arr1, 0, n, NULL);

    cout<<"Original Linked List: ";
    print(head);

//sort Linked List(Approach-01): In this approach we change the values of the List to sort them.

    // Node *cur = head;
    // int count0 = 0, count1 = 0, count2 = 0;

    // while(cur)
    // {
    //     if(cur->data == 0)
    //     {
    //         count0++;
    //     }
    //     else if(cur->data == 1)
    //     {
    //         count1++;
    //     }
    //     else{
    //         count2++;
    //     }

    //     cur = cur->next;
    // }

    // cur = head;

    // while(count0--)
    // {
    //     cur->data = 0;
    //     cur = cur->next;
    // }
    // while(count1--)
    // {
    //     cur->data = 1;
    //     cur = cur->next;
    // }
    // while(count2--)
    // {
    //     cur->data = 2;
    //     cur = cur->next;
    // }


//sort Linked List(Approach-02): In this approach we take the node which contain smaller value and connect them. 

    Node *cur = head;
    Node *head0 = NULL, *head1 = NULL, *head2 = NULL;
    Node *cur0 = NULL, *cur1 = NULL, *cur2 = NULL;

    while(cur)
    {
        Node *next = cur->next; // Store the next node before updating cur
        cur->next = NULL; // Reset the next pointer
        
        if(cur->data == 0)
        {
            if(head0 == NULL)
                head0 = cur;
            else
                cur0->next = cur; 
            cur0 = cur; // Update cur0
        }
        else if(cur->data == 1)
        {
            if(head1 == NULL)
                head1 = cur;
            else
                cur1->next = cur; 
            cur1 = cur; // Update cur1
        }
        else{
            if(head2 == NULL)
                head2 = cur;
            else
                cur2->next = cur; 
            cur2 = cur; // Update cur2
        }
        cur = next; // Move to the next node
    }

    if(cur0)
        cur0->next = head1;
    if(cur1)
        cur1->next = head2;

//print the linked list
    cout<<"\nAfter sorting the Linked List: ";
    
    print(head0);
}

