
//Merge Two sorted List


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
    cout<<endl;

}

int main(){
    
    Node *head1 = NULL;
    Node *head2 = NULL;

    int arr1[] = {2, 4, 5, 7}, n=4;
    int arr2[] = {3, 4, 4, 6, 8, 10}, m=6;

    head1 = Create_DLL(arr1, 0, n, NULL);
    head2 = Create_DLL(arr2, 0, m, NULL);

    cout<<"1st Linked List: ";
    print(head1);
    cout<<"2nd Linked List: ";
    print(head2);

//Merge Linked list:

    vector<int>ans;

    Node *ptr1 = head1, *ptr2 = head2;

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->data <= ptr2->data)
        {
            ans.push_back(ptr1->data);
            ptr1 = ptr1->next;
        }
        else{
            ans.push_back(ptr2->data);
            ptr2 = ptr2->next;
        }
    }

    //if Any element of first List is left:
    while(ptr1)
    {
        ans.push_back(ptr1->data);
        ptr1 = ptr1->next;
    }
    //if Any element of second List is left:
    while(ptr2)
    {
        ans.push_back(ptr2->data);
        ptr2 = ptr2->next;
    }

//print the linked list
    cout<<"\nAfter merging 2 Linked List: ";

    int mergedArr[ans.size()];

    for(int i = 0; i < ans.size(); i++)
    {
        mergedArr[i] = ans[i];
    }
    Node *head3 = Create_DLL(mergedArr, 0, ans.size(), NULL);

    print(head3);
    
    
}

